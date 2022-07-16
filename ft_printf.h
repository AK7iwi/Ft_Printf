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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		first_param(const char str1, va_list ap);
int	ft_c(int i);
int	ft_s(const char *str);
int	ft_p(void *str);
int	ft_d(int nb);
int	ft_i(int nb);
int	ft_u(unsigned int nb);
int	ft_x(unsigned int nb);
int	ft_X(unsigned int nb);
int	ft_pour();

#endif