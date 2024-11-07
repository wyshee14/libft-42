#include "libft.h"
#include <stdio.h>

void *memcpy(void *dest, const void *src, size_t numBytes)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (unsigned char *)src;
    size_t i = 0;
    while (i < numBytes)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}