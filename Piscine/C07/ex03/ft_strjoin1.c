/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:37:10 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/28 20:19:57 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	len_array_strs(int size, char **strs)
{
	int	i;
	int	j;
	int	len_strs;

	len_strs = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		len_strs += ft_strlen(strs[i]);
		i++;
	}
	return (len_strs);
}

char	*ft_strcat(int size, char **strs, char *sep, char *cat_strs)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			cat_strs [k++] = strs [i][j++];
		j = 0;
		while (sep [j] && i < size - 1)
			cat_strs [k++] = sep [j++];
		i++;
	}
	cat_strs [k] = '\0';
	return (cat_strs);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat_strs;
	int		len_strs;

	if (size == 0)
	{
		cat_strs = (char *)malloc(sizeof(char));
		cat_strs = "";
		return (cat_strs);
	}
	else
	{
		len_strs = len_array_strs(size, strs);
		len_strs += len_array_strs(1, &sep) * (size - 1);
		cat_strs = (char *)malloc(sizeof(char) * (len_strs + 1));
		cat_strs = ft_strcat (size, strs, sep, cat_strs);
		return (cat_strs);
	}
}

// int	main(void)
// {
// 	int		size;
// 	char	*strs[4];
// 	char	*sep;
// 	int		len_arrays;
// 	int		len_sep;
// 	char	*new_str;

// 	strs[0] = "sokdaksnd;kandf;knd;lknSKL;N";
// 	strs[1] = "LKdnknDCJNa;ksnc;akNS;kasd;kANSD:lknms;dkj";
// 	strs[2] = ";jkASDKJnadksn;aksdn;klaNSD;Lkd;kljSD;lknsd;lknDS";
// 	strs[3] = "JAHSDJHALSKDJLak;sd;lkSD;KLds;klAS";
// 	sep = " ,_, ";
// 	size = 4;
// 	len_arrays = len_array_strs (size, strs);
// 	len_sep = ft_strlen (sep);
// 	printf("strs total length is: %i\n", len_arrays);
// 	printf("sep total length is: %i\n", len_sep);
// 	new_str = ft_strjoin(size, strs, sep);
// 	printf("%s", new_str);
// }
