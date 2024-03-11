/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:35:09 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/28 19:13:09 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_word_count(char *str)
{
	int i;
	int j;
	int words;
	
	i = 0;
	j = 0;
	words = 0;
	while(str[i])
	{
		if (str[i] == 9 || str[i] == 10 || str[i] == 32)
		{
			if (i - j > 1)
			{
				j = i; 
				i++;
				words++;
			}
			else
			{
				i++;
				j = i;
			}
		}
		else
			i++;
	}
	if (i - j > 1)
		words++;
	return (words);
}

int	ft_strlen(char *str, int start, int end)
{
	int i;
	int len;
	
	i = start;
	len = 0;
	while (str[i] && i < end)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char *str)
{
	char	**str_array;
	int		i;
	int		j;
	int 	words;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	words = ft_word_count(str);
	printf("%i\n", len);
	str_array = malloc(sizeof(char*) * (words + 1));
	if (!(str_array))
		return(NULL);
	words = 0;
	while(str[i])
	{
		if (str[i] == 9 || str[i] == 10 || str[i] == 32)
		{
			if (i - j > 1)
			{
				len = ft_strlen(str, j, i);
				printf("%i\n", len);
				// printf("%i\n", i);
				str_array[words] = malloc(sizeof(char) * (len + 1));
				// while (j < i)
				// {
				// 	str_array[words][j] = str[j];
				// 	j++;
				// }
				// str_array[words][j] = '\0';
				j = i;
				i++;
				words++;
			}
			else
			{
				i++;
				j = i;
			}
		}
		else
			i++;
	}
	return (str_array);
}


int main(void)
{
	char	str[] = " Hel lo wo \nrld \n how are you do\ting?  best        of luck a a";
	char 	**str_array;
	int words;
	
	str_array = ft_split(str);
	words = ft_word_count(str);
	printf("%i", words);
}