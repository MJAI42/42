/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 08:23:47 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/14 10:59:23 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (64 < str [i] && str [i] < 91)
		{
			str [i] += 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str [] = "ABCDd";
// 	char	str_1 [] = "AbCdE6";
// 	char    *test = ft_strlowcase (str);
// 	char    *test_1 = ft_strlowcase (str_1);
// 	printf("%s \n", test);
// 	printf("%s \n", test_1);
// 	return (0);
// }
