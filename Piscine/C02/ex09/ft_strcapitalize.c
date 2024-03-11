/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 08:40:31 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/14 11:01:22 by mjichi           ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	char	*strlow;
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	strlow = ft_strlowcase (str);
	while (strlow [i] != '\0')
	{
		if (flag == 0 && (96 < strlow [i] && strlow [i] < 123))
		{
			strlow [i] -= 32;
			flag = 1;
		}
		else if (!((96 < strlow [i] && strlow [i] < 123)
				|| (47 < strlow [i] && strlow [i] < 58)))
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (strlow);
}

// int main(void)
// {
// 	char str [] = "salut, comment tu vas ? 
// 42mots quarante-deux; cinquante+et+un";
// 	char *str_1 = ft_strcapitalize (str);
// 	printf("%s \n", str);
// 	printf("%s \n", str_1);
// }