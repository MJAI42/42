/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:42:56 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/22 18:20:58 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_check_double(char *str1, char c, int position)
{
	int i;

	i = 0;
	while (i < position)
	{
		if (str1[i] == c)
			return(1);
		else
			i++;
	}
	return (0);
	
}

void	ft_union(char *str1, char *str2)
{
	int i;

	i = 0;
	while(str1[i])
	{
		if (ft_check_double(str1, str1[i], i) == 0)
		{
			write(1, &str1[i], 1);
			i++;
		}
		else
			i++;
	}
	i = 0;
	while(str2[i])
	{
		if ((ft_check_double(str1, str2[i], i) == 0) 
				&& ft_check_double(str2, str2[i], i) == 0)
		{
			write(1, &str2[i], 1);
			i++;
		}
		else
			i++;
	}
}


int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_union(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	
}