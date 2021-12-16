/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:52:07 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/14 14:44:00 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= 'A' && str[aux] <= 'Z')
			str[aux] = str[aux] + 32;
		if (str[aux] >= 97 && str[aux] <= 122)
		{		
			if (aux == 0)
				str[aux] = str[aux] - 32;
			else if (! ((str[aux - 1] >= 'a' && str[aux - 1] <= 'z')
					|| (str[aux - 1] >= 'A' && str[aux - 1] <= 'Z')
					|| (str[aux - 1] >= '0' && str[aux - 1] <= '9')))
				str[aux] = str[aux] - 32;
		}
	aux++;
	}
	return (str);
}
