/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 12:44:54 by mflores-          #+#    #+#             */
/*   Updated: 2020/07/13 17:54:04 by mflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int x;
	int sort;

	i = 0;
	while (i < size)
	{
		x = 0;
		while (x < size - 1)
		{
			if (tab[x] > tab[x + 1])
			{
				sort = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = sort;
			}
			x++;
		}
		i++;
	}
}
