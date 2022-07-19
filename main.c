#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
int main()
{
    printf("%d", ft_printf(" %p ",LONG_MAX));
    printf("\n");
}