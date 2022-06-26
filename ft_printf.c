/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:58:55 by mfeldman          #+#    #+#             */
/*   Updated: 2022/06/27 00:24:30 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_first_param(const char *str)
{
    int i = strlen(str);  // ft_strlen
 
    while(i > 0)
    {
        if (str[1 + strlen(str) - i] != 'c'||'s'||'p'||'d'||'i'||'u'||'x'||'X'||'%') /* +2 */  // ft_strlen
            return(0);
        i -= 2;
    }
    return(1);
}

int first_param(const char *str) 
{
    if (check_first_param(str) == 0)
        printf("%s", "oui");   
    return(1);
}


int ft_printf(const char *str, ...)
{
    va_list ap;
    va_start(ap,str);
    const char *val = va_arg(ap, const char *); // malloc/free ici 
    first_param((char *)str,val);
    va_end(ap);
    return(ft_strlen(val));
}

int main()
{   
    const char *str;
    str = "%u%i%u";
    first_param(str);
}