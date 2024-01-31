/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:06:37 by flfische          #+#    #+#             */
/*   Updated: 2024/01/31 17:30:19 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Explain why the output of this program is "aa" and not "ab".
// How can you change the program so that it prints "ab" instead?

void	my_function(char a)
{
	a = 'b';
	return ;
}

int	main(void)
{
	char	a;

	a = 'a';
	write(1, &a, 1);
	my_function(a);
	write(1, &a, 1);
	return (0);
}
