#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	if (!dest && !src)
		return (0);
	if (src > dest)
		ft_memcpy((char *)dest, (const char *)src, n);
	else
	{
		while (n--)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	return (dest);
}
