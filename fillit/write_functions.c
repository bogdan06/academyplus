#include "fillit.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while(c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}

char	*ft_strcpy(char *dest, const char *src)
{
	char *copie;

	copie = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (copie);
}

int		ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 || *str2)
	{
		if (*str1 != *str2)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		str1++;
		str2++;
	}
	return (0);
}
