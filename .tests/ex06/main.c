/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:56:03 by flfische          #+#    #+#             */
/*   Updated: 2024/01/31 19:56:13 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	replace_vowels(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	replace_vowels(argv[1]);
	return (0);
}
