#include "libft.h"

void *ft_memset(void *s, int x, unsigned int n)
{
    unsigned char *p = s;
    while (n--)
    {
        *p++ = (unsigned char)x;
    }
    return s;
}

#include <stdio.h>
int main()
{
	char s[] = "Hello my name is Bello.";
	ft_memset((s + 17), 'X', 5);
	printf("%s\n", s);
}

