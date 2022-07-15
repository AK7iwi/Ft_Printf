/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:59:31 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/15 00:50:18 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>


int ft_printf(const char *str, ...);
void first_param(const char str1, va_list ap); 
void    ft_c(int i);
void    ft_s(const char *str);
void	ft_p(void *str);
void	ft_d(int nb);
void	ft_i(int nb);
void	ft_u(unsigned int nb);
void	ft_x(int b);
void	ft_X(int b);

#endif