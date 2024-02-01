/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:03:31 by flfische          #+#    #+#             */
/*   Updated: 2024/02/01 11:00:22 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*str_swap_halves(char *str);

int	main(int argc, char **argv)
{
	char	*str;
	char	*addr;

	addr = argv[1];
	if (argc != 2)
		return (0);
	str = str_swap_halves(argv[1]);
	if (str != addr)
		printf("Wrong Return Value \n");
	printf("%s\n", str);
	return (0);
}
