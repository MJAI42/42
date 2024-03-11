/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:32:33 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/28 15:38:00 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int	j;
	
	i = 0;
	j = 0;
	while ((s1[i] && s2[i] != '\0') && (s1[i] == s2[i]))
		i++;

	if (s1[i] - s2[i] > 0)
		return (1);
	else if (s1[i] - s2[i] < 0)
		return (-1);
	else
		return(0);
}

int main(void)
{
	char	s1[] = "Hello blue planet!";
	char	s2[] = "Hello blue planet!";
	int		diff;
	int		diff1;

	diff = ft_strcmp(s1, s2);
	diff1 = strcmp(s1, s2);
	printf("ft diff is: %i\n", diff);
	printf("original diff is: %i\n", diff1);
}