/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:58:55 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/15 01:13:39 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	first_param(const char str, va_list ap)
{
	int		j;

	j = 0;
	if (str == 'c')
		j += ft_c(va_arg(ap, int));
	if (str == 's')
		j += ft_s(va_arg(ap, const char *));
	if (str == 'p')
		j += ft_p(va_arg(ap, unsigned long long int *));
	if (str == 'd')
		j += ft_d(va_arg(ap, int));
	if (str == 'i')
		j += ft_i(va_arg(ap, int));
	if (str == 'u')
		j += ft_u(va_arg(ap, unsigned int));
	if (str == 'x')
		j += ft_x(va_arg(ap, unsigned int));
	if (str == 'X')
		j += ft_xmaj(va_arg(ap, unsigned int));
	if (str == '%')
		j += ft_pour();
	return (j);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	ap;

	i = 0;
	len = 0;
	va_start (ap, *str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len += first_param(str[i + 1], ap);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end (ap);
	return (len);
}
