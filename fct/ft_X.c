/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_X.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 23:09:58 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/17 01:34:42 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_X(unsigned int nb)
{
	unsigned long long int nb2 = (unsigned long long int)nb;
	return(ft_putnbr_ibase(nb2,"0123456789ABCDEF"));

}