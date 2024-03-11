/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:07:20 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/09 18:14:06 by mjichi           ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	decimal;

	decimal = 48;
	while (decimal < 58)
	{
		write (1, &decimal, 1);
		decimal++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
