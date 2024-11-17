#include "libft.h"   

static int	ft_numlen(long i)
{
	int	len;

	len = 1;
	if (i < 0)
	{
		len++;
		i = -i;
	}
	while (i > 9)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*str;

	num = n;
	len = ft_numlen(n);
	str = ft_calloc(sizeof(char), (len + 1));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		ft_strlcpy(str, "0", 2);
		return (str);
	}
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	while (num > 0 && len > 0)
	{
		str[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}