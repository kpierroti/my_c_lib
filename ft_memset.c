#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*t;

	t = (char *)str;
	while (n > 0)
	{
		n--;
		t[n] = c;
	}
	return (str);
}
