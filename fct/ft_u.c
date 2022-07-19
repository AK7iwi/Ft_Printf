/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 22:50:26 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/15 22:50:26 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u(unsigned int nb)
{
	unsigned int i = nb; 
	ft_putnbr_fdu(nb,1);
	if (nb == 0)
		return(1);
	return(ft_uintlen(i));
	
}