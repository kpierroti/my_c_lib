#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n;
	size_t	l;

	n = 0;
	l = ft_strlen((char *)s);
	if (len <= 0 || start > l)
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	else if (len > l - start)
		len = l - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (n < (len) && s[start] != '\0')
	{
		str[n++] = s[start++];
	}
	str[n] = '\0';
	return (str);
}