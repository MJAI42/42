/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:39:17 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/22 17:30:34 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int len;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]) - 1;
		while ((argv[1][len] == 32 || argv[1][len] == 9) && len > 0)
			len--;
		while ((argv[1][len] > 32 && argv[1][len] < 123) && len > 0)
			len--;
		while (argv[1][len])
		{
			if ((argv[1][len] == 32) || (argv[1][len] == 9))
				len++;
			else
			{
				write(1, &argv[1][len], 1);
				len++;
			}
		}
		write(1, "\n", 1);
	}	
	else
		write(1, "\n", 1);
}
