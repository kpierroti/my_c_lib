#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (*s != '\0')
	{
		f(i, s);
		s++;
		i++;
	}
}