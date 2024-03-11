/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:21:55 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/25 17:55:32 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int i)
{
	int temp;

	temp = 0;
	// if (i == -2147483648)
	// 	write(1, "-2147483648", 1);
	// else if (i < 0 && i > -2147483647)
	// {
	// 	i = i * (-1);
	// 	write (1, "-", 1);
	// }
	// else if (i > 0)
	if (i > 0)
	{
		ft_putnbr(i / 10);
		temp = i % 10 + 48;
		write (1, &temp, 1);
	}

}

void	ft_fizzbuzz (void)
{
	int i;

	i = 1;

	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write (1, "fizzbuzz", 8);
			write (1, "\n", 1);
			i++;
		}
		else if (i % 5 == 0)
		{
			write (1, "buzz", 4);
			write (1, "\n", 1);
			i++;
		}
		else if (i % 3 == 0)
		{
			write (1, "fizz", 4);
			write (1, "\n", 1);
			i++;
		}
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
			i++;
		}
	}
}

int main(void)
{
	ft_fizzbuzz();
}