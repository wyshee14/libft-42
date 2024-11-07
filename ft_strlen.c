#include "libft.h"

int ft_strlen(char *s)
{
	int counter = 0;
	while (s[counter] != "\0")
	{
		counter++;
	}
	return counter;
}
