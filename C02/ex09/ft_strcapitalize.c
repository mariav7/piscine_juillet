/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:39:08 by mflores-          #+#    #+#             */
/*   Updated: 2020/07/19 17:20:51 by mflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int		is_maj(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		is_min(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		first_letter;

	i = 0;
	first_letter = 1;
	while (str[i] != '\0')
	{
		if (!is_alphanum(str[i]))
			first_letter = 1;
		else
		{
			if (first_letter && is_min(str[i]))
			{
				str[i] = str[i] - 32;
			}
			else if (!first_letter && is_maj(str[i]))
			{
				str[i] = str[i] + 32;
			}
			first_letter = 0;
		}
		i++;
	}
	return (str);
}
