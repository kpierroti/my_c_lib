int	ft_memcmp(const void *str1, const void *str2, int n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	i = 0;
	if (n == 0)
		return (0);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (i < (n - 1) && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
