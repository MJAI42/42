/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:40:35 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/22 10:39:42 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		temp;
	int		j;
	int		len_str;

	i = 0;
	j = 0;
	len_str = 0;
	temp = 0;
	while (str [i])
		i++;
	len_str = i;
	while ( j < len_str/2)
	{
		temp = str [j];
		printf("%i, ", temp);
		str[j] = str[i - 1];
		str [i - 1] = temp;
		j++;
		i--;
	}
	return(str);
}

int	main (void)
{
	char str [] = "Home sweet home!";

	printf("%s\n", ft_strrev(str));
	return (0);
}
