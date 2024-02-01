/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:57:09 by flfische          #+#    #+#             */
/*   Updated: 2024/01/31 22:23:58 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotate_digits(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	rotate_digits(argv[1]);
	write(1, "\n", 1);
	return (0);
}
