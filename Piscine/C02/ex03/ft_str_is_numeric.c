/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:55:37 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/14 10:44:37 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str [i] != '\0')
	{
		if (47 < str [i] && str [i] < 58)
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
// 	char	str [] = "123";
// 	char	str_1 [] = "12345#6";
// 	test = ft_str_is_numeric (str);
// 	test_1 = ft_str_is_numeric (str_1);
// 	printf("%i", test);
// 	printf("%i", test_1);
// 	return (0);
// }
