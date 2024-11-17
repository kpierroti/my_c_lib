#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t num)
{
	size_t	i;
	size_t	n;

	n = 0;
	i = 0;
	if (num == 0)
		return (ft_strlen(src));
	while (src[n] != '\0')
		n++;
	while ((i < (num - 1)) && src[i] != '\0' && num > 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (n);
}