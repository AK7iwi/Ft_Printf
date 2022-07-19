#include <stdio.h>
#include "ft_printf.h"
int main()
{
    printf("%d", ft_printf("%u", 0));
    printf("%u", 0);
}