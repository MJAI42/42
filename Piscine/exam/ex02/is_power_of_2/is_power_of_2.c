/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:49:56 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/28 16:07:50 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int 	i;
	int 			temp;

	i = 1;
	temp = 0;
	while (i < n/2)
	{
		if (i * i == n)
			return(1);
		else
			i++;	
	}
	return (0);
}

int	main(void)
{
	int i;

	i = is_power_of_2 (100);
	printf("%i\n", i);
}
