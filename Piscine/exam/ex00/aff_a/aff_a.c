/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:52:48 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/24 18:15:29 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_flag_a(char *str)
{
	int i;
	i = 0;
	
	while (str[i])
	{
		if (str[i] == 97)
		{
			return (1);
			break;
		}
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc == 2)
	{
		if (ft_flag_a(argv[1]) == 1)
		{
			write(1, "a", 1);
			write(1, "\n", 1);	
		}
		else if (ft_flag_a(argv[1]) == 0)
			write(1, "\n", 1);
	}
	else
	{
		write(1, "a", 1);
		write(1, "\n", 1);
	}
}
