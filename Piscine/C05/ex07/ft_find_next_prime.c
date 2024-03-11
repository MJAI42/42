/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:35:20 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/20 15:42:11 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			else
				i++;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = 0;
	if (nb < 2)
		return (2);
	else if (nb == 2147483647)
		return (2147483647);
	else
	{
		while (prime == 0)
		{
			prime = ft_is_prime(nb + 1);
			nb++;
		}
		return (nb);
	}
}

// int	main(void)
// {
// 	printf ("%i", ft_find_next_prime(37));
// }
