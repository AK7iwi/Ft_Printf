/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_X.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 23:09:58 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/21 02:38:07 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_xmaj(unsigned int nb)
{
	unsigned long long int	nb2;
	int						i;

	nb2 = (unsigned long long int)nb;
	i = ft_hexlen (nb2);
	ft_putnbr_base (nb2, "0123456789ABCDEF");
	return (i);
}
