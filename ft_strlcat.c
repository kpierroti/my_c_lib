#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ind_d;
	size_t	ind_s;
	size_t	len;

	ind_d = ft_strlen(dst);
	ind_s = ft_strlen(src);
	len = 0;
	if (size == 0)
		len = ind_s;
	else if (size < ind_d)
		len = size + ind_s;
	else if (size >= ind_d)
	{
		len = ind_d + ind_s;
		ind_s = 0;
		while (src[ind_s] != '\0' && ind_d < (size - 1))
		{
			dst[ind_d] = src[ind_s];
			ind_d++;
			ind_s++;
		}
		dst[ind_d] = '\0';
	}
	return (len);
}