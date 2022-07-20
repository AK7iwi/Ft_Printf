/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:23:12 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/20 22:09:57 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_s(const char *str)
{
    if (!str)
    {
        write(1,"(null)",6);
        return(6);
    }
    write(1, str, ft_strlen(str));
    return(ft_strlen(str));
}