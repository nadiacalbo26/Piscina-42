/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:43:40 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/16 13:35:52 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	g_aux;
int	g_auy;
int	g_find;
int	g_pos;
int	g_sizefind;

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	g_aux = 0;
	g_auy = 0;
	g_find = -1;
	while (str[aux])
		aux++;
	return (aux);
}

char	*ft_strstr(char *str, char *to_find)
{
	g_sizefind = ft_strlen(to_find);
	while (str[g_aux])
	{
		if (str[g_aux] != to_find[g_auy])
		{
			g_auy = 0;
			g_find = -1;
		}
		if (str[g_aux] == to_find[g_auy])
		{
			if (g_find == -1)
				g_find = g_aux;
			g_auy++;
		}
		if (g_auy == g_sizefind - 1 && g_find != -1)
			break ;
		g_aux++;
	}
	if (g_find == -1)
		return (NULL);
	return (&str[g_find]);
}
