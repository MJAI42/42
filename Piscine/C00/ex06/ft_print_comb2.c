/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:15:53 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/11 12:12:46 by mjichi           ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int digit_1, int digit_2)
{
	ft_putchar(48 + digit_1 / 10);
	ft_putchar(48 + digit_1 % 10);
	ft_putchar(' ');
	ft_putchar(48 + digit_2 / 10);
	ft_putchar(48 + digit_2 % 10);
}

void	ft_print_comb2(void)
{
	int		digit_1;
	int		digit_2;

	digit_1 = 0;
	while (digit_1 <= 99)
	{
		digit_2 = digit_1 + 1;
		while (digit_2 <= 99)
		{
			ft_print(digit_1, digit_2);
			if (digit_1 == 98 && digit_2 == 99)
			{
			}
			else
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			digit_2++;
		}
		digit_1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
