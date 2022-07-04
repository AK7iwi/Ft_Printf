/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:58:55 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/05 00:05:06 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int first_param(const char str1,char *str2) 
{
    if (str1 == 'c')
        write(1, str2,1);
    if (str1 == 's')
        write(1, str2,1);
    return(0);
    
    
}

int ft_printf(const char *str, ...)
{
    int i;
    i = 0;
    va_list ap;
    va_start(ap,str);
    
    while(str[i] != '\0')
    {
        if(str[i] == '%')
        {    
            first_param(str[i+1], va_arg(ap,char*));
        }
        write(1,&str[i], 1);
        
        i++;
    }
    
    
     /*while (str[i++])
    {
        if (str[i] == '%')
            first_param(str[i + 1],va_arg(ap,char *));
        else 
            return(0);
    }*/
    return(8);
    va_end(ap);
}
