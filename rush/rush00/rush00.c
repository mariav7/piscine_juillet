/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 14:34:06 by mflores-          #+#    #+#             */
/*   Updated: 2020/07/04 16:14:32 by mflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int i;

	i = 0;
	while (x > i)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	second_line(int x)
{
	int i;

	i = 0;
	while (x > i)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int g;

	g = 0;
	if (x > 0 && y > 0)
	{
		while (y > g)
		{
			if (g == 0 || g == y - 1)
			{
				first_line(x);
			}
			else
			{
				second_line(x);
			}
			g++;
		}
	}
}
