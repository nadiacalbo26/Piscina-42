/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:00:57 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/14 15:18:45 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
	{
		if (!(str[aux] >= 32 && str[aux] <= 127))
			return (0);
		aux++;
	}
	return (1);
}
