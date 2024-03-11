/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:08:13 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/17 15:04:33 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str [i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int		len_str;
// 	char	str [] = "Hello World!";

// 	len_str = ft_strlen(str);
// 	printf("The string length of: %s\n", str);
// 	printf("is: %i\n", len_str);
// 	return (0);
// }
