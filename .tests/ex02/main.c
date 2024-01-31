/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:27:52 by flfische          #+#    #+#             */
/*   Updated: 2024/01/31 19:32:41 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	putint(int num);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	putint(atoi(argv[1]));
	return (0);
}
