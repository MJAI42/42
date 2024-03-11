/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:03:57 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/27 19:37:15 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_char(char *str1, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str1[i] == c)
		{
			return (1);
		}
		else
			i++;
	}
	return (0);
}

void	ft_inter (char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j])
			{
				if (ft_check_char (str1, str1[i], i) == 0)
				{
					write(1, &str1[i], 1);
					break;
					j++;
				}
				else
					j++;
			}
			else
				j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
		write(1 , "\n", 1);
	}
	else
		write(1, "\n", 1);
}