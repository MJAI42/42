/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:51 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/18 16:10:06 by mjichi           ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int		i;

	i = 0;
	while (src [i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		len_src;
	unsigned int		len_dest;

	i = 0;
	j = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size <= len_src)
		len_src += size;
	else
		len_src += len_dest;
	while (dest [i])
		i++;
	while ((src [j] != '\0') && (i + 1 < size))
	{
		dest [i] = src [j];
		i++;
		j++;
	}
	dest [i] = '\0';
	return (len_src);
}
/*
#include <stdio.h>

int main (void)
{
		unsigned int		size;
		unsigned int		new_len_dest;
		size = 20;
		char dest [20] = "Hello";
		char str [] = " blue planet!";
		printf("Input string is: %s\n", str);
		printf("Destination string is: %s\n", dest);
		printf("Input destination size is %i\n", size);
		new_len_dest = ft_strlcat (dest, str, size);
		printf("New Destination is: %s\n", dest);
		printf("New destination length is: %i\n", new_len_dest);
		return(0);
}
*/
