/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 23:48:24 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/21 00:00:58 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fdu(unsigned char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	b;

	b = n;
	if (b < 0)
	{
		ft_putchar_fd('-', fd);
		b *= -1;
	}
	if (b <= 9)
		ft_putchar_fd('0' + b, fd);
	else if (b > 9)
	{
		ft_putnbr_fd(b / 10, fd);
		ft_putchar_fd('0' + b % 10, fd);
	}
}

void	ft_putnbr_fdu(unsigned int n, int fd)
{
	long long	b;

	b = n;
	if (b < 0)
	{
		ft_putchar_fd ('-', fd);
		b *= -1;
	}
	if (b <= 9)
		ft_putchar_fd ('0' + b, fd);
	else if (b > 9)
	{
		ft_putnbr_fdu (b / 10, fd);
		ft_putchar_fd ('0' + b % 10, fd);
	}
}

void	ft_putnbr_base(unsigned long long int nb, char *base)
{
	if (nb >= 16)
	{
		ft_putnbr_base(nb / 16, base);
		write(1, &base[nb % 16], 1);
	}
	else
		write(1, &base[nb], 1);
}
