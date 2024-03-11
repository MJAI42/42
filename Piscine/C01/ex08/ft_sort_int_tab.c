/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:07:41 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/13 19:17:32 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab [j] > tab [j + 1])
			{
				temp = tab [j];
				tab [j] = tab [j + 1];
				tab [j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// int	main (void)
// {
// 	int tab [] = {6, 6, 6, 6, 3, 5, 5, 1, 9, 0};
// //	int tab [] = {5,8,9,4,3,6};
// 	int size = 10;
// 	int i;
// 	ft_sort_int_tab(tab, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%i", tab [i]);
// 		i++;
// 	}
// 	return (0);
// }
