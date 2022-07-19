/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 22:24:51 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/15 22:24:51 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_d(int nb)
{
	int i = ft_intlen(nb); 

	ft_putnbr_fd(nb,1);
	if (nb == 0)
		return(1);
	else if (nb < 0)
		return(i + 1);
	return(i);
}