/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 10:46:23 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/25 11:24:13 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main (void)
{
	char s1 [] = "flavi";
	char s2 [] = "abc";

	printf("strcpy output: %s\n", strcpy(s1, s2));
	printf("ft_strcpy output: %s\n", ft_strcpy(s1, s2));
	
}
