/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:52:34 by mflores-          #+#    #+#             */
/*   Updated: 2020/07/20 11:42:44 by mflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char src[] = "Bonjour";
	char dest[] = "Hasta Luego";

	printf("String a = %s\n", src);
	printf("String b = %s\n", dest);
	ft_strlcpy(dest, src, 3);
	printf("String a = %s\n", src);
	printf("String b = %s\n", dest);
	return (0);
}
