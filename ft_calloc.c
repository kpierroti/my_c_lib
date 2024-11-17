#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void			*m;

	if (size != 0)
	{
		if (((n * size) / size) != n)
			return (NULL);
	}
	if (size == 0)
		return (malloc(1));
	m = malloc(n * size);
	if (m == NULL)
		return (NULL);
	ft_bzero(m, (n * size));
	return (m);
}
