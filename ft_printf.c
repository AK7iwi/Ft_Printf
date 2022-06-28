/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:58:55 by mfeldman          #+#    #+#             */
/*   Updated: 2022/06/28 21:50:08 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int first_param(const char *str1,char *str2) 
{
    if (str == 'c')
        write(1, str2,1);
    if (str == 's')
        write(1, str2,ft_strlen(str2));
    if (str == 'p')
    
    if (str == 'd')
        ft_putnbr_fd()
    if (str == 'i')
        ft_putnbr_fd()
    if (str == 'u')
    
    if (str == 'x')
    
    if (str == 'X')
    
    if (str == '%')
        write(1, '%',1);
}


int ft_printf(const char *str, ...)
{
    i =  ft_strlen(str);
    va_list ap;
    va_start(ap,str);
    while (i > 0)
    {
        first_param(str[],va_arg(ap,char *));
        i = i -2;
    }
    va_end(ap);
    return(ft_strlen(val));
}
