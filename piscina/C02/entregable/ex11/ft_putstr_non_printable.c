/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:18:25 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/15 18:26:32 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h> 

void	ft_putstr_non_printable(char	*str)
{
	int				aux;
	unsigned char	tmp;

	aux = 0;
	while (str[aux])
	{
		if (!(str[aux] >= 32 && str[aux] < 127))
		{
			write(1, "\\", 1);
			tmp = str[aux];
			write(1, &"0123456789abcdef"[tmp / 16], 1);
			write(1, &"0123456789abcdef"[tmp % 16], 1);
		}
		else
			write(1, &str[aux], 1);
		aux++;
	}
}
