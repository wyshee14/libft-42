#include "libft.h"

int ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 0;
	else
		return 1;
}