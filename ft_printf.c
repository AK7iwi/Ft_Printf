/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:58:55 by mfeldman          #+#    #+#             */
/*   Updated: 2022/06/26 14:57:07 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_first_param()
{
    return(0);
}

int first_param(char *str1, const char *str2)  /* va_list*/
{
    int i = ft_strlen(str2);

    while(i > 0)
    {
        if (str1[1 + ft_strlen(str1) - i] == 'c') /* +2 */
            write(1, str2, 1);
        if (str1[1 + ft_strlen(str1) - i] == 's')
            write(1, str2, ft_strlen(str2));
        if (str1[1 + ft_strlen(str1) - i] == '%')
            write(1, "%", 1);
        i -= 2;
    }
    return(0);
}

int ft_printf(const char *str, ...)
{
    va_list ap;
    va_start(ap,str);
    const char *val = va_arg(ap, const char *); /* malloc/free ici */
    first_param((char *)str,val);
    va_end(ap);
    return(ft_strlen(val));
}

int main()
{
    ft_printf("%s", "OUi");
}