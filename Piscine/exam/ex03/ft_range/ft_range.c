/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:35:28 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/28 17:01:39 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	i;

	i = 0;
	array = (int *)malloc(sizeof(int) * (end - start + 1));
	if(!(array))
		return (NULL);
	
	while (start <= end)
	{
		array[i] = start;
		start++;
		i++;
	}
	return(array);
}

int main(void)
{
	int *array;
	int start = -100;
	int end = 100;
	int i = 0;
	array = ft_range (start, end);
	
	while (i < (end - start + 1))
	{
		printf("%i, ", array[i]);
		
		i++;
	}
}
