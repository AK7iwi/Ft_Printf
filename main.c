#include <stdio.h>
#include "ft_printf.h"

int main()
{
    printf("%d",ft_printf("%X",4485478));
    printf("\n");
    printf("%d",printf("%X",4485478));
}