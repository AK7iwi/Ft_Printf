/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ibase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 01:17:33 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/17 02:29:50 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_ibase(unsigned long long int nb, char *base)
{
    int	i;
    i =  0;
	if (nb >= 16)
	{
		i++;
		ft_putnbr_ibase(nb / 16, base);
		write(1, &base[nb % 16], 1);
		
	}
	else
	{
		write(1, &base[nb], 1);
		i++;
	}
	return(i);
}
