#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		n;
	int		i;
	char	*str;

	n = 0;
	i = 0;
	while (s[n] != '\0')
		n++;
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
