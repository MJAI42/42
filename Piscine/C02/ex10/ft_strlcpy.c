/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:26:00 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/14 13:34:37 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src [i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	i;

	i = 0;
	len_src = ft_strlen (src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest [i] = src[i];
			i++;
		}
		dest [i] = '\0';
	}
	return (len_src);
}

// int	main(void)
// {
// 	char				src [] = "Hello World!";
// 	char				dest [50];
// 	unsigned int		n = 50;
// 	unsigned int		len;
// 	len = ft_strlcpy(dest, src , n);
// 	printf("%d", len);
// 	return (0);
// }
