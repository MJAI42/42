/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:22:16 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/12 19:30:49 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	d;
	int	e;
	int *a;
	int	*b;

	d = 42;
	e = 43;
	a = &d;
	b = &e;

	ft_swap(&d, &e);
	write (1,&d,1);
	write (1,&e,1);

	return (0);
}
*/