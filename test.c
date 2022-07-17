#include <stdio.h>

size_t	ft_strleni(iconst char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int main()
{
    
    printf("%ld",ft_strleni("gerger"));
}