/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:56:12 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/20 12:26:12 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest [i] != '\0')
	{
		i++;
	}
	while (src [j] != '\0')
	{
		dest [i] = src [j];
		i++;
		j++;
	}
	dest [i] = '\0';
	return (dest);
}

// int main(void)
// {
//     char src2 [] = " World!";
//     char dest2 [15] = "Hello";
//     strcat(dest2, src2);
//     printf("%s\n", dest2);
// }