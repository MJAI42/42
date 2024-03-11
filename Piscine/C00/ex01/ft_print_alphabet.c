/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:33:40 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/09 18:10:42 by mjichi           ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	decimal;

	decimal = 97;
	while (decimal < 123)
	{
		write (1, &decimal, 1);
		decimal ++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
