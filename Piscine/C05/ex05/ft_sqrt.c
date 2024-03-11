/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:58:56 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/18 21:01:12 by mjichi           ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sq;

	i = 0;
	sq = 0;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		if (i % 2 != 0)
		{
			nb = nb - i;
			i++;
			sq++;
		}
		else if (i % 2 == 0)
			i++;
	}
	if (nb == 0)
		return (sq);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_sqrt(100));
}
*/
