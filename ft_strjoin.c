#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i_s1;
	size_t	i_s2;
	size_t	len;
	char	*str;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	i_s1 = ft_strlen((char *)s1);
	i_s2 = ft_strlen(s2);
	len = i_s1 + i_s2 + 1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (0);
	ft_memmove(str, s1, i_s1);
	ft_memmove(str + i_s1, s2, i_s2);
	str[len - 1] = '\0';
	return (str);
}
