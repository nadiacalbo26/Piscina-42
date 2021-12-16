/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:56:50 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/13 16:58:09 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
	{
		if (!(str[aux] >= 'a' && str[aux] <= 'z'))
			return (0);
		aux++;
	}
	return (1);
}
