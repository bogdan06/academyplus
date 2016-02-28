#include "fillit.h"

void	check_shapes(char *buf, char a[][7], int z)
{
	int i;
	int x;
	char v[7];

	i = -1;
	x = 0;
	while(++i < 21)
		if (buf[i] != '@' && buf[i] != '\n')
		{
			v[x] = buf[i];
			x++;
		}
	v[x] = '\0';
	i = -1;
	x = 0;
	while(++i < 14 && x == 0)
		if (ft_strcmp(v, a[i]) == 0)
			x = 1;
	if (x == 0)
		termina();
	build_matrices(buf, z);
}

void	build_matrices(char *buf, int x)
{
	int var[4]; /*0 - i, 1 - l, 2 - c, 3 - gasit;*/

	var[0] = -1;
	var[1] = 0;
	var[2] = 0;
	var[3] = 0;
	while (++var[0] < 21)
	{
		if ((buf[var[0]] == '@' || buf[var[0]] == '\n') && var[3] == 1)
		{
			g_figuri[x].n = var[2];
			var[3] = 0;	
			var[2] = 0;
			var[1]++; 
		}
		else if (buf[var[0]] != '@' && buf[var[0]] != '\n')
		{
			if (buf[var[0]] == '#')
				g_figuri[x].f[var[1]][var[2]] = x + 'A';
			else
				g_figuri[x].f[var[1]][var[2]] = buf[var[0]];
			var[2]++;
			var[3] = 1;
		}
	}
	g_figuri[x].m = var[1];
}

int		check_existing(char **mat, int ip, int jp, int x)
{
	int i;
	int j;
	int ok;
	int z1;
	int z2;

	i = ip;
	ok = 1;
	z1 = 0;
	while (i < g_figuri[x].m + ip && ok)
	{
		j = jp;
		z2 = 0;
		while (j < g_figuri[x].n + jp && ok)
		{
			if (g_figuri[x].f[z1][z2] != '.' && mat[i][j] != '.')
				ok = 0;
			j++;
			z2++;
		}
		z1++;
		i++;
	}
	return (ok);
}

int		can_place(char **mat, int ip, int jp, int x, int lm)
{
	if (jp + g_figuri[x].n > lm || ip + g_figuri[x].m > lm || !check_existing(mat, ip, jp, x))
		return (0);
	return (1);
}

int		exista(char **a, int m)
{
	int i;

	i = -1;
	while (++i < m) // pe linie
		if (a[m - 1][i] != '.')
			return (1);
	i = -1;
	while (++i < m) // pe coloana
		if (a[i][m - 1] != '.')
			return (1);
	return (0);
}
