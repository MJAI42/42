/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:43:45 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/14 10:53:38 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str [i] != '\0')
	{
		if (31 < str [i] && str [i] < 127)
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
// 	test = ft_str_is_printable (str);
// 	test_1 = ft_str_is_printable (str_1);
// 	printf("%i", test);
// 	printf("%i", test_1);
// 	return (0);
// }