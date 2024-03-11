/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:24:20 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/18 21:09:40 by mjichi           ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		pow *= nb;
		power--;
	}
	return (pow);
}
/*
#include <stdio.h>

int	main(void)
{
	int	pow;

	pow = ft_iterative_power(3, 2);
	printf("%i\n", pow);
	return (0);
}
*/
