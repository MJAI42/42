/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:59:48 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/17 12:14:45 by mjichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while ((i < n - 1) && (s1[i] && s2[i]) != '\0' && s1[i] == s2[i])
		{
			i++;
		}
		if (s1[i] == s2 [i])
			return (0);
		else
			return (s1[i] - s2[i]);
	}
}

// int	main(void)
// {
// 	int					print_sum;
// 	// int					print_sum1;
// 	char				*s1;
// 	char				*s2;
// 	unsigned int		n;

// 	n = 0;
// 	s1 = "worad";
// 	s2 = "Worad";
// 	print_sum = ft_strncmp(s1, s2, n);
// 	// printf("%i \n", print_sum);
// 	// print_sum1 = strncmp(s1, s2, n);
// 	// printf("%i \n", print_sum1);
// 	return (0);
// }
