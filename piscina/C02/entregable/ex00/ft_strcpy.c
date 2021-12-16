/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:43:11 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/13 16:27:48 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	aux;

	aux = 0;
	while (src[aux])
	{
		dest[aux] = src[aux];
		aux++;
	}
	dest[aux] = '\0';
	return (dest);
}
