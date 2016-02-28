#include "fillit.h"

void	first_check(char *buf)
{
	int i;
	int nrdiez;
	int nrpatru;

	i = -1;
	nrdiez = 0;
	nrpatru = 0;
	while(buf[++i])
	{
		if (buf[i] == '#' || buf[i] == '.')
			nrpatru++;
		if (buf[i] == '\n')
		{
			if (nrpatru > 4)
				termina();
			nrpatru = 0;
		}
		if (buf[i] == '#')
			nrdiez++;
		if (buf[i] != '#' && buf[i] != '.' && buf[i] != '\n')
			termina();
	}
	if (nrdiez != 4 || buf[i - 1] != '\n')
		termina();
}

void	check_connected(char *buf)
{
	int i;
	int x;

	i = 0;
	while(i < 21)
	{
		x = 0;
		if (buf[i] == '#')
		{
			if (i - 1 >= 0 && buf[i - 1] == '#')
				x = 1;
			if (i + 1 <= 20 && buf[i + 1] == '#')
				x = 1;
			if (i + 5 <= 20 && buf[i + 5] == '#')
				x = 1;
			if (i - 5 >= 0 && buf[i - 5] == '#')
				x = 1;
			if (x == 0)
				termina();
		}
		i++;
	}
	second_check(buf);
}

void	second_check(char *buf)
{
	int i;
	int j;
	int k;
	int nrdiez;

	k = 0;
	i = 0;
	j = 4;
	while(k < 4)
	{
		nrdiez = 0;
		while(i < j)
		{	
			if (buf[i] == '#')
				nrdiez++;
			i++;
		}
		if (nrdiez == 0)
			second_check_elim(i - 4, j, buf, 1);
		j += 5;
		k++;
	}
	second_check_vertical(buf);
}

void	second_check_vertical(char *buf)
{
	int i;
	int j;
	int k;
	int nrdiez;

	k = 0;
	while(k < 4)
	{
		nrdiez = 0;
		j = 0;
		i = k;
		while(j < 4)
		{
			if (buf[i] == '#')
				nrdiez++;
			i += 5;
			j++;
		}
		if (nrdiez == 0)
			second_check_elim(i - 20, i - 4, buf, 5);
		k++;
	}
}

void	second_check_elim(int i, int j, char *buf, int pas)
{
	while(i < j)
	{
		buf[i] = '@';
		i += pas;
	}
}