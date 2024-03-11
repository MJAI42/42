/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:55:32 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/25 13:16:55 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_cap(char *s1)
{
	int i;
	int temp;
	
	i = 0;
	temp = 0;
	while (s1[i])
	{
		if (s1[i] > 64 && s1[i] < 91)
		{
			temp = s1[i] + 32;
			write (1, &temp, 1);
			i++;
		}
		else if (s1[i] > 96 && s1[i] < 123)
		{
			temp = s1[i] - 32;
			write(1, &temp, 1);
			i++;
		}
		else
		{
			write(1, &s1[i], 1);
			i++;
		}			
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_print_reverse_cap(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
