/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:59:14 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/24 18:44:49 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	int		len_src;
	char	*new_src;
	int		i;

	len_src = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
		len_src++;
	}
	new_src = (char *)malloc(sizeof(char) * (len_src + 1));
	if (! (new_src))
		return (NULL);
	i = 0;
	while (src [i] != '\0')
	{
		new_src [i] = src [i];
		i++;
	}
	new_src [i] = '\0';
	return (new_src);
}

// int	main(void)
// {
// 	char	*src;
// 	char	*new_src;

// 	src = "Once upon a time";
// 	new_src = strdup(src);
// 	printf("String address: %p\n", src);
// 	printf("String address: %p\n", new_src);
// 	printf("New string is: %s", new_src);
// 	return (0);
// }
