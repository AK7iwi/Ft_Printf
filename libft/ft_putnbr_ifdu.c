/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ifdu.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 01:23:48 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/17 02:33:16 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_ifdu(unsigned int n, int fd)
{
	int i;
	i = 0;
	long long	b;

	b = n;
	if (b < 0)
	{
		ft_putchar_fd('-', fd);
		b *= -1;
		i++;
	}
	if (b <= 9)
	{
		ft_putchar_fd('0' + b, fd);
		i++;
	}
	else if (b > 9)
	{
		ft_putnbr_ifd(b / 10, fd);
		ft_putchar_fd('0' + b % 10, fd);
		i++;
	}
	return(i);
}