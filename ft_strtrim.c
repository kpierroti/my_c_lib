#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen((char *)s1);
	while (end && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, 0, end));
}