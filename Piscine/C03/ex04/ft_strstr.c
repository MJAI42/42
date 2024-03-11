/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:42:54 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/20 12:39:04 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str [i] != '\0')
	{
		j = 0;
		while (str [i + j] == to_find [j])
		{
			if (to_find [j + 1] == '\0')
				return (&str [i]);
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*to_find;
// 	char	*temp;
// 	char	*temp2;

// 	str = "hello the world";
// 	to_find = "the";
// 	temp2 = strstr(str, to_find);
// 	temp = ft_strstr (str, to_find);
// 	printf("%s\n", temp2);
// 	printf("%s\n", temp);
// }
