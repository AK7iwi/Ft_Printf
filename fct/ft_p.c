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
	unsigned long long int str1 = (unsigned long long int)str;
	int i = ft_hexlen(str1);

	if (!str1)
    {
		ft_putstr_fd("(nil)",1);
        return(5);
    }
	ft_putstr_fd("0x",1);
	ft_putnbr_base(str1,"0123456789abcdef");	
	return(i + 2);
}
