/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:32:27 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/28 12:08:51 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_mirror(char *src)
{
	int i;
	int	temp;

	i = 0;
	temp = 0;
	while(src[i])
	{
		if (src[i] > 96 && src[i] < 123)
		{
			temp = 26 - (src[i] - 97) + 97 - 1;
			write(1, &temp, 1);
			i++;
		}
		else if (src[i] > 64 && src[i] < 91)
		{
			temp = 26 - (src[i] - 65) + 65 - 1;
			write(1, &temp, 1);
			i++;
		}
		else
		{
			write(1, &src[i], 1);
			i++;			
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_mirror(argv[1]);
		write (1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}