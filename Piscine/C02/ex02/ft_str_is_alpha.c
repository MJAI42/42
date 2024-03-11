/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:07:05 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/14 13:20:42 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str [i] != '\0')
	{
		if ((96 < str [i] && str [i] < 123)
			|| (64 < str [i] && str [i] < 91))
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
// 	char	str [] = "HelloWorld";
// 	char	str_1 [] = "CodeMaratho!n";
// 	test = ft_str_is_alpha (str);
// 	test_1 = ft_str_is_alpha (str_1);
// 	printf("%i", test);
// 	printf("%i", test_1);
// 	return (0);
// }
