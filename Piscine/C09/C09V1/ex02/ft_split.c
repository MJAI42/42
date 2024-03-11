/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:29:13 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/27 16:12:25 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_sep_flag(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
		{
			i++;
			return (1);
		}
		else
			i++;
	}
	return (0);
}

int	ft_word_counter(char *str, char *charset)
{
	int	i;
	int	j;
	int	words;

	i = 0;
	j = 0;
	words = 0;
	while (str[i])
	{
		if (ft_sep_flag(str[i], charset) == 1)
		{
			if ((i - j) != 0)
			{
				words++;
				j = ++i;
			}
			else
				j = ++i;
		}
		else
			i++;
	}
	return (words);
}

char	*ft_strcat(char *str, int i, int j)
{
	char	*word;
	int		k;

	k = 0;
	word = (char *)malloc(sizeof(char) * (i - j + 1));
	if (!(word))
		return (NULL);
	while ((j + k) < i)
	{
		word[k] = str[j + k];
		k++;
	}
	word[k] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**str_array;

	i = 0;
	j = 0;
	k = 0;
	str_array = (char **)malloc(sizeof(char *) * (ft_word_counter(str, charset) + 1));
	if (!(str_array))
		return (NULL);
	while (str[i])
	{
		if (ft_sep_flag(str[i], charset) == 1)
		{
			if ((i - j) != 0)
			{
				str_array[k] = ft_strcat(str, i, j);
				j = ++i;
				k++;
			}
			else
				j = ++i;
		}
		else
			i++;
	}
	str_array[k] = 0;
	return (str_array);
}

int	main(void)
{
	char	str[] = "Hello2 3Blue$23Pla net12";
	char	charset[] = "23";
	char	**str_array;
	int		words;
	int		i;
	int		j;

	i = 0;
	words =	ft_word_counter (str, charset);
	printf("There are %i words in str.\n", words);
	str_array = ft_split (str, charset);

	while (str_array[i])
	{
		j = 0;
		while (str_array[i][j])
		{
			write(1, &str_array[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
