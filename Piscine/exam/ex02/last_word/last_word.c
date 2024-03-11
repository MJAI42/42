/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:42:21 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/27 20:22:24 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen (char *str1)
{
	int i;

	i = 0;
	while(str1[i])
		i++;
	return (i);
}

void	ft_last_word(char *str1)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(str1) - 1;
	while (str1[len] == 32 || str1[len] == 9)
		len--;
	while (str1[len] > 32 && str1[len] < 127)
		len--;
	len++;
	while (str1[len] > 32 && str1[len] < 127)
	{
		write(1, &str1[len], 1);
		len++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_last_word(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);

}
