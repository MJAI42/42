/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:17:50 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/25 20:13:37 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>
#include <stdlib.h>


int	ft_atoi(const char *str)
{
	int i;
	int j;
	int sign;
	int num_return;
	int multiplier;
	
	i = 0;
	j = 0;
	sign = 1;
	num_return = 0;
	multiplier = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == 45)
	{
		sign = sign * -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i + j] > 47 && str[i + j] < 58)
	{
		num_return *= 10;
		num_return += (str [i] - 48);
		printf("num return is %i\n", num_return);
		i++; 
	}
	return (sign * num_return);
}

int	main(void)
{
	const char str[] = "    -123456789abdc asad 1234";
	
	printf("origitnal atoi output: %i\n", atoi(str));
	printf("Copy atoi output: %i\n", ft_atoi(str));
}

