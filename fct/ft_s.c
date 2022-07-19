/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:23:12 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/19 03:26:00 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_s(const char *str)
{
    if (str)
    {
        write(1, str,ft_strlen(str));
    }
    else 
        return(0);
    return(ft_strlen(str));
}