/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:00:56 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/25 12:32:12 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen (char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

void	ft_change_char(char *s1, char *char_find, char *char_replace)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == char_find[0])
		{
			write (1, &char_replace[0], 1);
			i++;
		}
		else
		{
			write (1, &s1[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{	
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			ft_change_char(argv[1], argv[2], argv[3]);
		}
		else
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}