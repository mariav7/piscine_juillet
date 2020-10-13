/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 08:56:08 by mflores-          #+#    #+#             */
/*   Updated: 2020/07/05 10:00:56 by mflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int a;

	a = 0;
	while (x > a)
	{
		if (a == 0 || a == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		a++;
	}
	ft_putchar('\n');
}

void	second_line(int x)
{
	int a;

	a = 0;
	while (x > a)
	{
		if (a == 0 || a == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		a++;
	}
	ft_putchar('\n');
}

void	third_line(int x)
{
	int a;

	a = 0;
	while (x > a)
	{
		if (a == 0 || a == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		a++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int b;

	b = 0;
	if (x > 0 && y > 0)
	{
		while (y > b)
		{
			if (b == 0)
			{
				first_line(x);
			}
			else if (b == y - 1)
			{
				third_line(x);
			}
			else
			{
				second_line(x);
			}
			b++;
		}
	}
}
