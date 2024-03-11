/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:48:10 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/28 11:26:03 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_check_char(char *src, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (src[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

int	ft_strlen(char *src)
{
	int i;

	i = 0;
	while(src[i])
		i++;
	return (i);
}

void	ft_union(char *src1, char *src2)
{
	int i;
	int	len;

	i = 0;
	len = ft_strlen(src1);
	while (src1[i])
	{
		if (ft_check_char(src1, src1[i], i) == 0)
		{
			write(1, &src1[i], 1);
			i++;
		}
		else
			i++;
	}
	i = 0;
	while (src2[i])
	{
		if (ft_check_char(src1, src2[i], len) == 0 &&
				ft_check_char(src2, src2[i], i) == 0)
		{
			write(1, &src2[i], 1);
			i++;
		}
		else
			i++;		
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
