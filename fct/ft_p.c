/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 05:53:40 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/15 01:36:49 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(void *str)
{
	unsigned long long int str2 = (unsigned long long int)str;
	int a = ft_hexlen(str2);
	write(1, "0x",2);
	ft_putnbr_base(str2,"0123456789abcdef");
	return(a);
}
