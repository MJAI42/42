/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:32:58 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/24 17:22:10 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	else
	{
		range = (int *)malloc(sizeof(int) * (max - min));
		if (! (range))
			return (NULL);
		i = 0;
		while (min < max)
		{
			range [i] = min;
			min++;
			i++;
		}
		return (range);
	}
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	i;
// 	int	number;
// 	// min = -2147483648;
// 	// max = 2147483647;
// 	min = -100;
// 	max = 100;
// 	range = ft_range (min, max);
// 	i = 0;
// 	while (i < (max - min))
// 	{
// 		number = range [i];
// 		printf("%i, ", number);
// 		i++;
// 	}
// 	return (0);
// }
