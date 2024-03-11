/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:28:17 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/28 19:49:11 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src)
{
	int		i;
	int		src_len;
	char	*src_copy;

	i = 0;
	src_len = ft_strlen(src);
	src_copy = (char *)malloc(sizeof(char) * (src_len + 1));
	if (! (src_copy))
		return (NULL);
	while (src[i])
	{
		src_copy [i] = src [i];
		i++;
	}
	src_copy = '\0';
	return (src_copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*stock;

	i = 0;
	stock = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (! (stock))
		return (NULL);
	while (i < ac)
	{
		stock[i].size = ft_strlen (av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strcpy(av[i]);
		i++;
	}
	stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}

// int	main(void)
// {
// 	char	*av[]= {"Hello", "world", "blue", "planet"};
// 	struct 	s_stock_str *stock;
// 	stock = ft_strs_to_tab(4, av);
// }