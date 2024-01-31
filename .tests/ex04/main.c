/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:50:00 by flfische          #+#    #+#             */
/*   Updated: 2024/01/31 21:44:45 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	print_strings(char *str1, char *str2);
int		find_next_word(char *str, char *charset, int offset);
int		ft_is_in_charset(char c, char *charset);
int		ft_count_words(char *str, char *charset);
char	*ft_strcpy_del(char *dest, char *src, char *charset);
char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	char	**arr;

	if (argc != 2)
		return (0);
	arr = ft_split(argv[1], "+");
	if (!arr)
		return (0);
	if (!arr[0])
		arr[0] = "";
	if (!arr[1])
		arr[1] = "";
	str1 = arr[0];
	str2 = arr[1];
	print_strings(str1, str2);
	write(1, "\n", 1);
	free(arr);
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		index[3];

	index[0] = ft_count_words(str, charset);
	dest = malloc(sizeof(char *) * (index[0] + 1));
	if (!dest)
		return (NULL);
	index[0] = 0;
	index[1] = 0;
	while (str[index[0]])
	{
		while (str[index[0]] && ft_is_in_charset(str[index[0]], charset))
			index[0]++;
		if (!str[index[0]])
			break ;
		index[2] = index[0];
		while (str[index[0]] && !ft_is_in_charset(str[index[0]], charset))
			index[0]++;
		dest[index[1]] = malloc(sizeof(char) * ((index[0] - index[2]) + 1));
		if (!dest[index[1]])
			return (NULL);
		ft_strcpy_del(dest[index[1]++], &str[index[2]], charset);
	}
	dest[index[1]] = NULL;
	return (dest);
}

char	*ft_strcpy_del(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (src[i] && !ft_is_in_charset(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	offset;

	count = 0;
	offset = 0;
	while (str[offset])
	{
		offset = find_next_word(str, charset, offset);
		if (offset == -1)
			break ;
		count++;
		offset++;
	}
	return (count);
}

int	ft_is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	find_next_word(char *str, char *charset, int offset)
{
	while (str[offset])
	{
		if (!ft_is_in_charset(str[offset], charset))
			return (offset);
		offset++;
	}
	return (-1);
}
