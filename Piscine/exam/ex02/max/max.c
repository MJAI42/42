/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:16:59 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/28 13:37:46 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				temp;

	i = 0;
	temp = 0;
	while (i < len)
	{
		if (tab[i] > temp)
		{
			temp = tab[i];
			i++;
		}
		else
			i++;
	}
	return (temp);
}

int	main(void)
{
	unsigned int	len;
	int				int_max;

	int tab[5] = {10, 20, 30, 40, 50};
	len = 5;
	int_max = max (tab, len);
	printf("%i\n", int_max);
	
}