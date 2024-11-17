#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	x;
	int	signal;

	i = 0;
	x = 0;
	signal = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		x = (x * 10) + (str[i] - 48);
		i++;
	}
	return (x * signal);
}
