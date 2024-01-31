/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:40:59 by flfische          #+#    #+#             */
/*   Updated: 2024/01/31 19:41:55 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	reverse_print(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	reverse_print(argv[1]);
	return (0);
}
