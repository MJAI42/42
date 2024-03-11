/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 13:20:11 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/25 16:33:56 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_rot13 (char *str)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
		{
			temp = (str [i] - 65 + 13) % 26 + 65;
			write (1, &temp, 1);
			i++;
		}
		else if (str[i] > 96 && str[i] < 123)
		{
			temp = (str [i] - 97 + 13) % 26 + 97;
			write (1, &temp, 1);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_print_rot13 (argv[1]);	
	}
	else
		write(1, "\n", 1);
}

