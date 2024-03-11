/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjichi <mjichi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:11:12 by mjichi            #+#    #+#             */
/*   Updated: 2024/02/10 19:09:25 by mjichi           ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top_line(int width)
{
	int	counter_width;

	counter_width = 0;
	while (counter_width < width)
	{
		if (counter_width == 0)
			ft_putchar('A');
		else if (counter_width == (width - 1))
			ft_putchar('A');
		else
			ft_putchar('B');
		counter_width++;
	}
}

void	bottom_line(int width)
{
	int	counter_width;

	counter_width = 0;
	while (counter_width < width)
	{
		if (counter_width == 0)
			ft_putchar('C');
		else if (counter_width == (width - 1))
			ft_putchar('C');
		else
			ft_putchar('B');
		counter_width++;
	}
}

void	middle_line(int width)
{
	int	counter_width;

	counter_width = 0;
	while (counter_width < width)
	{
		if (counter_width == 0)
			ft_putchar('B');
		else if (counter_width == (width - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
		counter_width++;
	}
}

/*
 * x and y cannot be negative or zero as they represent
 * a width and length. Moreover, we decided to ouput 
 * an empty line whenever those conditions are met.
 */

void	rush(int x, int y)
{
	int	counter_length;

	if (x <= 0 || y <= 0)
		ft_putchar('\n');
	else
	{
		counter_length = 0;
		while (counter_length < y)
		{
			if (counter_length == 0)
				top_line(x);
			else if (counter_length == (y - 1))
				bottom_line(x);
			else
				middle_line(x);
			ft_putchar('\n');
			counter_length++;
		}
	}
}
