/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:05:15 by flfische          #+#    #+#             */
/*   Updated: 2024/02/01 11:16:20 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	copy_even(int *arr, int size, int **copy);

int	main(void)
{
	int	arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	arr2[20] = {-1, -2, -3, -4, -5, -6, -7, -8, -9};
	int	arr3[20];
	int	**copy;

	copy = malloc(sizeof(int *) * 1);
	copy_even(arr1, 10, copy);
	while (*copy != NULL)
	{
		printf("%d ", **copy);
		*copy++;
	}
	printf("\n");
	copy_even(arr2, 20, *copy);
	while (*copy != NULL)
	{
		printf("%d ", **copy);
		copy++;
	}
	printf("\n");
	copy_even(arr3, 20, *copy);
	while (*copy != NULL)
	{
		printf("%d ", **copy);
		*copy++;
	}
	printf("\n");
	// free stuff in copy
	while (copy != NULL)
	{
		free(*copy);
		copy++;
	}
	free(copy);
	return (0);
}
