/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:46:11 by flfische          #+#    #+#             */
/*   Updated: 2024/02/01 10:08:43 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put_char(char c);

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	put_char(argv[1][0]);
	return (0);
}
