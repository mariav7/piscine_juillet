/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 17:19:15 by mflores-          #+#    #+#             */
/*   Updated: 2020/07/05 16:56:45 by mflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int i;

	i = 0;
	while (x > i)
	{
		if (i == 0)
			ft_putchar('/');
		else if (i == x - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
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
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	third_line(int x)
{
	int i;

	i = 0;
	while (x > i)
	{
		if (i == 0)
			ft_putchar('\\');
		else if (i == x - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int k;

	k = 0;
	if (x > 0 && y > 0)
	{
		while (y > k)
		{
			if (k == 0)
			{
				first_line(x);
			}
			else if (k == y - 1)
			{
				third_line(x);
			}
			else
			{
				second_line(x);
			}
			k++;
		}
	}
}
