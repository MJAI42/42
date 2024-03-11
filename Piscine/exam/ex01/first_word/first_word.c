/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:43:57 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/25 17:19:01 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_first_word(char *str)
{
	int i;
	
	i = 0;

	while (str[i] == 32 || str[i] == 9)
		i++;
	while (str[i] > 32 && str[i] < 127)
	{
		write (1, &str[i], 1);
		i++;
	}
}



int	main (int argc, char ** argv)
{
	if (argc == 2)
	{
		ft_first_word(argv[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
}
