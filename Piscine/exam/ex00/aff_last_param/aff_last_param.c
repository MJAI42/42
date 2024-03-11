/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:13:40 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/24 20:32:47 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc < 2)
		write (1, "\n", 1);
	else
	{
		while (argv[argc - 1][i])
		{
			write (1, &argv[argc - 1][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
}