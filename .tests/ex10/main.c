/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:05:15 by flfische          #+#    #+#             */
/*   Updated: 2024/01/31 20:09:36 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_odd(int *arr, int size);

int	main(void)
{
	int	arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	arr2[20] = {-1, -2, -3, -4, -5, -6, -7, -8, -9};

	print_odd(arr1, 10);
	print_odd(arr2, 20);
	print_odd(arr1, 0);
	print_odd(arr2, -10);
	return (0);
}