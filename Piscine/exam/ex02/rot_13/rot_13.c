/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:02:13 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/22 11:43:12 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i]<= 90)
			{
				argv[1][i] = (argv[1][i] - 65 + 13) % 26 + 65;
				write (1, &argv[1][i], 1);
				i++;
			}
			else if (argv[1][i] >= 97 && argv[1][i]<= 122)
			{
				argv[1][i] = (argv[1][i] - 97 + 13) % 26 + 97;
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
		return(1);
	}
	
}

