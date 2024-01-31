/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:50:00 by flfische          #+#    #+#             */
/*   Updated: 2024/01/31 19:50:50 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_strings(char *str1, char *str2);

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	print_strings(argv[1], argv[2]);
	return (0);
}
