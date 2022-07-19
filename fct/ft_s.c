/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:23:12 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/19 05:27:06 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_s(const char *str)
{
    if (!str)
        return(-1);
    write(1, str,ft_strlen(str));
    return(ft_strlen(str));
}