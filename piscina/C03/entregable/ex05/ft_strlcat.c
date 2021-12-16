/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:32:20 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/16 16:18:17 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

unsigned int	g_aux;
unsigned int	g_auy;
unsigned int	g_sizesrc;
unsigned int	g_sizedest;

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	g_sizesrc = 0;
	g_sizedest = 0;
	while (dest[g_sizedest])
		g_sizedest++;
	while (src[g_sizesrc])
		g_sizesrc++;
	if (size < g_sizedest)
		return (size + g_sizesrc);
	else
	{
		g_aux = g_sizedest;
		g_auy = 0;
		while (src[g_auy] && g_aux < size - 1)
		{
			dest[g_aux] = src[g_auy];
			g_auy++;
			g_aux++;
		}
		dest[g_aux] = '\0';
	}
	return (g_sizesrc + g_sizedest);
}
