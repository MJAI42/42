/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:47:14 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/14 10:56:07 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (96 < str [i] && str [i] < 123)
		{
			str [i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str [] = "abcd";
// 	char	str_1 [] = "abcd6";
// 	char    *test = ft_strupcase (str);
// 	char    *test_1 = ft_strupcase (str_1);
// 	printf("%s \n", test);
// 	printf("%s \n", test_1);
// 	return (0);
// }
