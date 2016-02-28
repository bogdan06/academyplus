#include "fillit.h"

void	copiere(char **b, int lm)
{
	int i;
	int j;

	i = 0;
	j = 0;
	g_min = lm;
	while (i < g_min)
	{
		j = 0;
		while (j < g_min)
		{
			g_c[i][j] = b[i][j];
			j++;
		}
		i++;
	}
}

void	clean(char **b, int x, int lm)
{
	int i;
	int j;

	i = 0;
	while (i < lm)
	{
		j = 0;
		while (j < lm)
		{
			if (b[i][j] == x + 'A')
				b[i][j] = '.';
			j++;
		}
		i++;
	}
}

void	fpatrat(char **a, int *n)
{
	while (!exista(a, *n))
		(*n)--;
}

int		fpatrat_temp(char **a, int n)
{
	while (!exista(a, n))
		n--;
	return (n);
}

void	backtrack(char **b, int x, int *lm, int nrf)
{
	int i;
	int j;

	i = -1;
	while (++i < *lm)
	{
		j = -1;
		while (++j < *lm)
			if (can_place(b, i, j, x, *lm))
			{
				place_figure(b, i, j, x);
				if (x == nrf - 1)
				{
					fpatrat(b, lm);
					if (*lm < g_min)
						copiere(b, *lm);
				}
				else
					if (fpatrat_temp(b, *lm) < g_min)
						backtrack(b, x + 1, lm, nrf);
					else
					{
						j = -1;
						i++;
					}
				clean(b, x, *lm);
			}
	}
}

void	place_figure(char **mat, int ip, int jp, int x)
{
	int i;
	int j;

	i = ip;
	while (i < g_figuri[x].m + ip)
	{
		j = jp;
		while (j < g_figuri[x].n + jp)
		{
			if (g_figuri[x].f[i - ip][j - jp] != '.')
				mat[i][j] = g_figuri[x].f[i - ip][j - jp];
			j++;
		}
		i++;
	}
}