/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fralexan <fralexan@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:29:28 by fralexan          #+#    #+#             */
/*   Updated: 2024/02/27 19:31:40 by fralexan         ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_show_tab(struct s_stock_str *par);
void	ft_putnbr(int nbr);

void	ft_putnbr(int nbr)
{
	char	n;

	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else if (nbr <= 9)
	{
		n = nbr + '0';
		write (1, &n, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	while (par && par->str != 0)
	{
		i = 0;
		while (par-> str[i])
			write (1, &par-> str[i++], 1);
		write (1, "\n", 1);
		ft_putnbr(par-> size);
		i = 0;
		write (1, "\n", 1);
		while (par-> copy[i])
			write (1, &par-> copy[i++], 1);
		write(1, "\n", 1);
		par++;
	}
}
