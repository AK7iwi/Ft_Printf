/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:58:55 by mfeldman          #+#    #+#             */
/*   Updated: 2022/06/25 20:29:25 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
# include <stdio.h>



int ft_printf(const char *str, ...)
{
    va_list ap;
    va_start(ap,str);
    const char *val = va_arg(ap, const char *);
    
    if (str = '%c')
        write(1, val, 1);
    if (str == '%s')
        write(1, val, strlen(val));
    if (str == '%%')
        write(1, "%", 1);
    va_end(ap);
}

int main()
{
    ft_printf("%s", "oui");
}
