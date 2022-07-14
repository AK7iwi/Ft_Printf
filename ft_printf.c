/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:58:55 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/15 01:13:39 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void first_param(const char str1,const char *str2) 
{
    int i;
    i =  584848;
    if (str1 == 'c')
        write(1, str2,1);
    if (str1 == 's')
        write(1, str2,ft_strlen(str2));
    if (str1 == 'p')
        ft_p(i);
    if (str1 == 'd')
        ft_d(i);
    if (str1 == 'i')
        ft_putnbr_fd(i,1);
    if (str1 == 'u')
        ft_u(7895);
    if (str1 == 'x')
        ft_x(7895);
    if (str1 == 'X')
        ft_X(7895);
    if (str1 == '%')
        write(1, "%",1);
}

int ft_printf(const char *str, ...)
{
    int i;
    i = 0;
    va_list ap;
    va_start(ap,*str);
    
    while(str[i] != '\0')
    {
        if(str[i] == '%')
        {    
            first_param(str[i+1], va_arg(ap,void *));
            i++;
        }
        else
            write(1,&str[i], 1);
        i++;
    }
    return(8);
    va_end(ap);
}
