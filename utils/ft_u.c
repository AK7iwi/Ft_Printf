#include "ft_printf.h"

void	ft_u(int b)
{
	char *base;
	base = "0123456789abcdef";
	
	if (b <= 15)
		ft_putchar_fd((base[b -(b % 16)]), 1);
	else if (b > 15)
	{
		ft_p(b / 16);
		ft_putchar_fd('0' + b % 16, 1);
	}
}