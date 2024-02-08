/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoritz <jmoritz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:57:09 by flfische          #+#    #+#             */
/*   Updated: 2024/02/08 13:22:55 by jmoritz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_itoa_base(int value, int base);

int main(void) {
    int values[] = {0, 5, 10, 15, -15};
    int bases[] = {2, 10, 16};

    for (size_t i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        for (size_t j = 0; j < sizeof(bases) / sizeof(bases[0]); j++) {
            char *str = ft_itoa_base(values[i], bases[j]);
            if (str == NULL) {
                printf("Error occurred in ft_itoa_base function\n");
                return 1;
            }
            printf("Value: %d, Base: %d, Result: %s\n", values[i], bases[j], str);
            free(str);
        }
    }

    return 0;
}
