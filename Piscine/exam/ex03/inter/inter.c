/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:40:18 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/22 16:00:27 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_check_double (char *str1, char c, int position)
{
	int i;

	i = 0;
	while (i < position)
	{
		if (str1[i] == c)
		{
			return (1);
			i++;
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
			if (str1[i] == str2 [j])
			{
				if (ft_check_double(str1, str1[i], i) == 0)
				{
					write (1, &str1[i], 1);
					j++;
					break;
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

int	main (int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}
	else
		write(1, "\n", 1);
}

// int main (void)
// {

// 	char str [] = "ababcdefuef12 t asd";
// 	char str1 [] = "abcdef";

// 	ft_inter (str, str1);

	
// }