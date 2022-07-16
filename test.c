
#include <stddef.h>

size_t	ft_strleni(int s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int main()
{
    printf(ft_strleni(4587));
}