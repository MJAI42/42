/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:19:12 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/12 19:27:18 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	modulo;

	division = *a / *b;
	modulo = *a % *b;
	*a = division;
	*b = modulo;
}
/*
int	main(void)
{
	int d = 100;
	int e = 9;
	int *a = &d;
	int *b = &e;

	ft_ultimate_div_mod(a, b);
	printf("%i", d);
	printf("%c", '\n');
	printf("%i", e);
}
*/