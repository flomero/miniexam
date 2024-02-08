/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoritz <jmoritz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:57:09 by flfische          #+#    #+#             */
/*   Updated: 2024/02/08 12:56:05 by jmoritz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Assume the copy_primes and rearrange_primes functions are defined somewhere else
int *copy_primes(int *arr, int size);
void rearrange_primes(int *arr, int size);

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *copy = copy_primes(arr, size);

    if (copy == NULL) {
        printf("Error occurred in copy_primes function\n");
        return 1;
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Copied array: ");
    for (int i = 0; copy[i] != '\0'; i++) {
        printf("%d ", copy[i]);
    }
    printf("\n");

    free(copy);

    rearrange_primes(arr, size);

    printf("Rearranged array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
