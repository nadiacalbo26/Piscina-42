/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:30:01 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/09 12:10:39 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	aux;
	int	counter;

	aux = 0;
	counter = 0;
	while (str[aux])
	{
		counter++;
		aux++;
	}
	return (counter);
}
