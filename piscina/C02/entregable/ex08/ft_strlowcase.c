/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:11:01 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/13 18:11:40 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
	{
		if (str[aux] >= 65 && str[aux] <= 90)
			str[aux] = str[aux] + 32;
		aux++;
	}
	return (str);
}
