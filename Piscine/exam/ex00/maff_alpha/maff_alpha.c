/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:44:17 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/24 20:03:09 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int i;
	int temp;

	i = 65;
	temp = 0;
	while (i < 91)
	{
		if (i % 2 == 1)
		{
			temp = i + 32;
			write (1, &temp, 1);
		}
		else if (i % 2 == 0)
			write (1, &i, 1);
		i++;
	}
}