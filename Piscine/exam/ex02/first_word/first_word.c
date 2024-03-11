/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:11:28 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/22 09:47:03 by mjichi           ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
	   write(1, "\n", 1);
	else if (argc > 1)
	{
		while ((argv [1][i] == 32 || argv[1][i] == 9) && argv[1][i])
			i++;
		while (argv[1][i] > 32 && argv[1][i] < 127 && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);	
}
