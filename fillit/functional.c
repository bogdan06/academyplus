#include "fillit.h"

void	termina()
{
	ft_putstr("error\n");
	exit(0);
}

void	reset(char **b, int lm)
{
	int i;
	int j;

	i = 0;
	while(i < lm)
	{
		j = 0;
		while(j < lm)
		{
			b[i][j] = '.';
			j++;
		}
		i++;
	}
}

void	retine_verif(char a[][7])
{
	int i;
	int filedesc;
	int ret;
	char buf[8];

	filedesc = open("verif.in", O_RDONLY);
	ft_strcpy(a[0], "####"); /*primu e diferit*/
	i = 1;
	while((ret = read(filedesc, buf, 8)))
	{
		buf[ret - 2] = '\0';
		ft_strcpy(a[i], buf);
		i++;
	}
}

int		lmax(int x)
{
	int i;
	int s1;
	int s2;

	i = -1;
	s1 = 0;
	s2 = 0;
	while(++i < x)
	{
		s1 += g_figuri[i].m;
		s2 += g_figuri[i].n;
	}
	if (s1 < s2)
		return (s1);
	return (s2);
}