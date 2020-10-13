/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbetmall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 11:41:24 by lbetmall          #+#    #+#             */
/*   Updated: 2020/07/04 12:16:38 by lbetmall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i != x - 1)
			ft_putchar('B');
		else
			ft_putchar('C');
		i++;
	}
}

void	second_line(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('B');
		else if (i != x - 1)
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (x > 0 && y > 0)
	{
		while (j < y)
		{
			if (j == 0 || j == y - 1)
				first_line(x);
			else
				second_line(x);
			j++;
			ft_putchar('\n');
		}
	}
}
