/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:12:36 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/16 18:11:43 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest [i] != '\0')
	{
		i++;
	}
	while (src [j] != '\0' && j < nb)
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
//     char dest2 [] = "Hello";
//     unsigned int nb = 2;
//     printf("%s\n", ft_strncat(dest2, src2, nb));
// }
