#include <stdio.h>
#include "ft_printf.h"
int main()
{
    printf("%d", ft_printf("%p", 15));
    printf("\n");
}