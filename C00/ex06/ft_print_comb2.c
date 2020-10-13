/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 12:43:34 by mflores-          #+#    #+#             */
/*   Updated: 2020/07/08 13:47:46 by mflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int i)
{
	if (i < 10)
	{
		ft_putchar(48);
		ft_putchar(i + '0');
	}
	else
	{
		ft_putchar(i / 10 + '0');
		ft_putchar(i % 10 + '0');
	}
}

void	display_num(int set1, int set2)
{
	ft_putint(set1);
	ft_putchar(' ');
	ft_putint(set2);
	if (!(set1 == 98 && set2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	set1;
	int	set2;

	set1 = 0;
	while (set1 <= 98)
	{
		set2 = set1 + 1;
		while (set2 <= 99)
		{
			if (set1 < set2)
				display_num(set1, set2);
			set2++;
		}
		set1++;
	}
}
