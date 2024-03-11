/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:48:59 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/27 19:03:00 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen (char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int 	i;
	int		len;
	char	*str1;
	
	i = 0;
	len = ft_strlen(str);
	str1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!(str))
		return (NULL);
	while(str[i])
	{
		str1[i] = str[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

int	main(void)
{
	char	*str;
	char	*str1;
	
	str = "Hello blue planet!";
	str1 = ft_strdup(str);

	printf("str1 says: %s\n", str1);
}
