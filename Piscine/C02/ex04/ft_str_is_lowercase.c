/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:36:02 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/14 10:51:46 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str [i] != '\0')
	{
		if (96 < str [i] && str [i] < 123)
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
// 	char	str [] = "abcd";
// 	char	str_1 [] = "abcd6";
// 	test = ft_str_is_lowercase (str);
// 	test_1 = ft_str_is_lowercase (str_1);
// 	printf("%i", test);
// 	printf("%i", test_1);
// 	return (0);
// }
