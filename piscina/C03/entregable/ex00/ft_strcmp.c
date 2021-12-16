/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:22:48 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/14 15:50:40 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *s1)
{
	int	aux;

	aux = 0;
	while (s1[aux])
	{
		aux++;
	}
	return (aux);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	size1;
	int	size2;
	int	aut;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	aut = 0;
	while (s1[aut] && s2[aut])
	{
		if (s1[aut] > s2[aut])
			return (1);
		if (s1[aut] < s2[aut])
			return (-1);
	aut++;
	}
	if (size1 < size2)
		return (1);
	if (size1 > size2)
		return (-1);
	return (0);
}
