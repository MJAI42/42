/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <marc.eljichi@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:10:29 by mjichi            #+#    #+#             */
/*   Updated: 2024/03/15 15:53:55 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	output;
	int	sign;

	output = 0;
	sign = 1;
	while (*str == 32 || (*str > 8 && *str < 14))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		output = output * 10 + *str - 48;
		str++;
	}
	return (sign * output);
}

#include <unistd.h>
#include <stdio.h>

int main(void)
{
	printf("%i\n", ft_atoi("      ---+--+1234ab567"));
	return (0);
}

