/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:53:44 by flfische          #+#    #+#             */
/*   Updated: 2024/01/31 22:05:40 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_uppercase(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	print_uppercase(argv[1]);
	write(1, "\n", 1);
	return (0);
}
