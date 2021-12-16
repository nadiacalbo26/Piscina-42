/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:56:15 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/13 16:55:31 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
	{
		if (!(str[aux] >= '0' && str[aux] <= '9'))
			return (0);
		aux++;
	}
	return (1);
}
