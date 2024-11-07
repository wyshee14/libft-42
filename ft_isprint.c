#include "libft,h"

int ft_isprint(char c)
{
	if (c >= 32 && c <= 127)
   		return 0;
  	else
   		return 1;
}
