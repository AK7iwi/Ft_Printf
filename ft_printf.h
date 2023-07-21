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

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		first_param(const char str1, va_list ap);

int		ft_c(int i);
int		ft_s(const char *str);
int		ft_p( unsigned long long int *str);
int		ft_d(int nb);
int		ft_i(int nb);
int		ft_u(unsigned int nb);
int		ft_x(unsigned int nb);
int		ft_xmaj(unsigned int nb);
int		ft_pour(void);

size_t	ft_strlen(const char *s);
size_t	ft_intlen(int nb);
size_t	ft_uintlen(unsigned int nb);
size_t	ft_hexlen(unsigned long long int nb);

void	ft_putchar_fd(char c, int fd);
void	ft_putchar_fdu(unsigned char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_fdu(unsigned int n, int fd);
void	ft_putnbr_base(unsigned long long int nb, char *base);

#endif