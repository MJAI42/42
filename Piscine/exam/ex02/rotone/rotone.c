/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:20:38 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/22 12:32:28 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] > 64 && argv[1][i] < 91)
			{
				argv[1][i] = (argv[1][i] - 65 + 1) % 26 + 65;
				write (1, &argv[1][i], 1);
				i++;
			}
			else if (argv[1][i] > 96 && argv[1][i] < 123)
			{
				argv[1][i] = (argv[1][i] - 97 + 1) % 26 + 97;
				write (1, &argv[1][i], 1);
				i++;
			}
			else
			{
				write (1, &argv[1][i], 1);
				i++;
			}
		}
		write (1, "\n", 1);
	}
	else
	{
		write (1, "\n", 1);
	}
	return (0);
}