/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:58:55 by mfeldman          #+#    #+#             */
/*   Updated: 2022/06/29 04:02:58 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int first_param(const char *str1,char *str2) 
{
    if (str1 == 'c')
        write(1, str2,1);
    if (str1 == 's')
        write(1, str2,ft_strlen(str2));
    if (str == 'p')
    
    if (str1 == 'd')
        ft_putnbr_fd()
    if (str1 == 'i')
        ft_putnbr_fd()
    if (str1 == 'u')
    
    if (str1 == 'x')
    
    if (str1 == 'X')
    
    if (str1 == '%')
        write(1, '%',1);
}


int ft_printf(const char *str, ...)
{
    i = 0;
    va_list ap;
    va_start(ap,str);
    
    while (i > 0)
    {
        if (str[i] = '%')
            first_param(str[i + 1],va_arg(ap,char *));
        i = i + 2;
        else 
            return(0);
    }
    va_end(ap);
    return(ft_strlen(val));
}
