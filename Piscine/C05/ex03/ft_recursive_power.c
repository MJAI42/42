/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:39:09 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/18 21:07:20 by mjichi           ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	pow;

	pow = 1;
	if (power > 0)
	{
		pow = nb * ft_recursive_power(nb, power - 1);
		return (pow);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main (void)
{
	int	pow;

	pow = ft_recursive_power(3, 3);
	printf("%i\n", pow);
	return (0);
}
*/
