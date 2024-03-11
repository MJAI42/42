/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:41:07 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/14 10:52:03 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str [i] != '\0')
	{
		if (64 < str [i] && str [i] < 91)
			i++;
		else
		{
			flag = 0;
			i++;
		}
	}
	return (flag);
}

// int	main(void)
// {
// 	int		test;
// 	int		test_1;
// 	char	str [] = "AZE";
// 	char	str_1 [] = "AXZXSDFD34";
// 	test = ft_str_is_uppercase (str);
// 	test_1 = ft_str_is_uppercase (str_1);
// 	printf("%i", test);
// 	printf("%i", test_1);
// 	return (0);
// }
