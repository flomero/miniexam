/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:50:00 by flfische          #+#    #+#             */
/*   Updated: 2024/02/08 12:37:15 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

int	ft_sqrt(int n);

int	main(void)
{
	printf("sqrt(0) = %d\n", ft_sqrt(0));
	printf("sqrt(1) = %d\n", ft_sqrt(1));
	printf("sqrt(2000) = %d\n", ft_sqrt(2000));
	printf("sqrt(%d) = %d\n", INT_MAX, ft_sqrt(INT_MAX));
	printf("sqrt(%d) = %d\n", INT_MIN, ft_sqrt(INT_MIN));
	return (0);
}
