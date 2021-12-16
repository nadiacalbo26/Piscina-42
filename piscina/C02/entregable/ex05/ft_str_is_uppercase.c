/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:42:54 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/13 17:57:07 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	aux;
	int	verify;

	verify = 1;
	aux = 0;
	while (str[aux])
	{
		if (!(str[aux] >= 'A' && str[aux] <= 'Z'))
			return (0);
		aux++;
	}
	return (verify);
}
