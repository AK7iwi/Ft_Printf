/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 05:53:40 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/14 11:55:24 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p(const char *s)
{
	char *base;
	int i;
	
	base = "0123456789ABCDEF";
	i = 0;
	while(s[i++])
	{
		if (s[i] <= 15)
			ft_putchar_fd('0' + base[s[i] - '0'], 1);
		else if (s[i] > 15)
		{
			ft_p(s[i] -'0'/ 16);
			ft_putchar_fd('0' + (s[i] -'0') % 16, 1);
		}
	}
}

int main()
{
	ft_p("ouio");
}
		
		
		
