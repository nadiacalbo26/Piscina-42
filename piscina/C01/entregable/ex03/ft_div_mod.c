/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:08:27 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/08 10:08:55 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
