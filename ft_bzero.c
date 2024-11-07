#include "libft.h"

void ft_bzero(void *s, unsigned int n)
{
    unsigned char *p = s;
    while (n--)
    {
        *p++ = 0;
    }
    return s;
}