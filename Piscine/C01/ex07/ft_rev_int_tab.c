/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:33:51 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/12 21:26:39 by mjichi           ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab [i] = tab[size -1 - i];
		tab [size - 1 - i] = temp;
		i++;
	}
}
/*
int main (void)
{
	int size;
	int	i;

	size = 10;
	int array [10] = {1,2,3,4,5,6,7,8,9,10};	
	ft_rev_int_tab (array, size);
	i = 0;
	while (i < size )
	{
		printf("%i", array[i]);
		i++;
	}
	return (0);
}
*/
