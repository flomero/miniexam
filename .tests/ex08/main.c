/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:58:01 by flfische          #+#    #+#             */
/*   Updated: 2024/01/31 22:32:57 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_ascii(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	print_ascii(argv[1]);
	write(1, "\n", 1);
	return (0);
}
