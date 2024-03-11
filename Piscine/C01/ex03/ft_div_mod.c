/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:28:59 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/12 19:32:13 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	division;
	int	modulo;

	division = a / b;
	modulo = a % b;
	*div = division;
	*mod = modulo;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	*div;
	int	*mod;

	a = 100;
	b = 9;
	div = &c;
	mod = &d;
	ft_div_mod(a, b, div, mod);
	printf("%i", c);
	printf("%i", d);
}
*/