/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:32:27 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/24 17:22:53 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array_int;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array_int = (int *)malloc(sizeof(int) * (max - min));
	if (!(array_int))
	{
		*range = NULL;
		return (-1);
	}
	*range = array_int;
	while (min < max)
	{
		array_int [i] = min;
		min++;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	len_range;
// 	int	i;
// 	int	*range;

// 	min = -10;
// 	max = 10;
// 	i = 0;
// 	len_range = ft_ultimate_range (&range, min, max);
// 	while (i < (max - min))
// 	{
// 		printf("%d, ", range[i]);
// 		i++;
// 	}
// 	return (0);
// }
