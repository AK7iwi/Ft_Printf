/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:59:31 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/14 15:34:09 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>


int ft_printf(const char *str, ...);
void first_param(const char str1,const char *str2);
void	ft_p(int b);
void	ft_d(int b);
void	ft_u(int b);
void	ft_x(int b);
void	ft_X(int b);

#endif