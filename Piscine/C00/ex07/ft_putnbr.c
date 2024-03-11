/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:03:00 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/16 14:23:31 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str [i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	*min_int;

	min_int = "-2147483648";
	if (nb == -2147483648)
		ft_putstr(min_int);
	else if (nb < 0 && nb > -2147483648)
	{
		ft_putchar('-');
		nb = nb * -1;
		ft_putnbr(nb / 10);
		ft_putchar ('0' + nb % 10);
	}
	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putchar ('0' + nb % 10);
	}
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 2147483647;
// 	ft_putnbr(nb);
// 	return (0);
// }
