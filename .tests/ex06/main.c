/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:56:03 by flfische          #+#    #+#             */
/*   Updated: 2024/01/31 22:18:08 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*replace_vowels(char *str);

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
		return (0);
	str = replace_vowels(argv[1]);
	printf("%s\n", str);
	return (0);
}
