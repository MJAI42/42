/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:40:23 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/13 19:19:29 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest [i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	src [] = "Crunch time @ 42!";
// 	char	dest [15];

// 	ft_strcpy(dest, src);
// 	printf("%s", dest);
// 	return (0);
// }
