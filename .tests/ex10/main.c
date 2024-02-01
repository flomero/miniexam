/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:05:15 by flfische          #+#    #+#             */
/*   Updated: 2024/02/01 12:04:27 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*copy_even(int *arr, int size);

int	main(void)
{
	int	arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size1;
	int	*copy1;
	int	arr2[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9};
	int	size2;
	int	*copy2;
	int	*arr3;
	int	*copy3;

	// Test 1: Even-sized array
	size1 = sizeof(arr1) / sizeof(arr1[0]);
	copy1 = copy_even(arr1, size1);
	if (copy1 != NULL)
	{
		for (int i = 0; copy1[i] != 0; ++i)
		{
			printf("%d ", copy1[i]);
		}
		printf("\n");
		// Free the allocated memory
		free(copy1);
	}
	else
	{
		printf("Test 1 failed: Memory allocation error\n");
	}
	// Test 2: Odd-sized array
	size2 = sizeof(arr2) / sizeof(arr2[0]);
	copy2 = copy_even(arr2, size2);
	if (copy2 != NULL)
	{
		for (int i = 0; copy2[i] != 0; ++i)
		{
			printf("%d ", copy2[i]);
		}
		printf("\n");
		// Free the allocated memory
		free(copy2);
	}
	else
	{
		printf("Test 2 failed: Memory allocation error\n");
	}
	// Test 3: Empty array
	arr3 = NULL;
	copy3 = copy_even(arr3, 0);
	if (copy3 != NULL)
	{
		for (int i = 0; copy3[i] != 0; ++i)
		{
			printf("%d ", copy3[i]);
		}
		printf("\n");
		// Free the allocated memory
		free(copy3);
	}
	else
	{
		printf("Test 3 failed: Memory allocation error\n");
	}
	return (0);
}
