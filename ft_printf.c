/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:58:55 by mfeldman          #+#    #+#             */
/*   Updated: 2022/06/26 01:02:30 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int first_param(const char *str1, const char *str2)
{
    int i = ft_strlen(str1);

    while(i > 0)
    {
        if (str1[1 + ft_strlen(str1) - i] == '%c') /* +2 */
            write(1, str2, 1);
        if (str1[1 + ft_strlen(str1) - i] == '%s')
            write(1, str2, ft_strlen(str2));
        if (str1[1 + ft_strlen(str1) - i] == '%%')
            write(1, "%", 1);
        i -= 2;
    }
}


int ft_printf(const char *str, ...)
{
    va_list ap;
    va_start(ap,str);
    const char *val = va_arg(ap, const char *); /* malloc/free ici */
    first_param(str,val);
    va_end(ap);
}

