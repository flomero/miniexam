/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:03:31 by flfische          #+#    #+#             */
/*   Updated: 2024/01/31 20:03:40 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	replace_space_with_tab(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	replace_space_with_tab(argv[1]);
	return (0);
}
