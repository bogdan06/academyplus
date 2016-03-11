#include "fillit.h"
#define BUF_SIZE 21

t_fig g_figuri[26];
char **g_c;
int g_min = 2147483647;

void	main_check(int argc, int filedesc)
{
	if (argc < 2 || argc > 2)
	{
		ft_putstr("usage: fillit target_file\n");
		exit(0);
	}
	if (filedesc < 0)
	{
		ft_putstr("invalid file name!\n");
		exit(0);
	}
}

char	**main_aloca(char **b, int lm)
{
	int i;

	b = (char**)malloc(lm * sizeof(char*));
	g_c = (char**)malloc(lm * sizeof(char*));
	i = 0;
	while(i < lm)
	{
		b[i] = (char*)malloc(sizeof(char) * lm);
		g_c[i] = (char*)malloc(sizeof(char) * lm);
		i++;
	}
	return (b);
}

void	main_afiseaza()
{
	int i;
	int j;

	i = -1;
	while (++i < g_min)
	{
		j = -1;
		while(++j < g_min)
			ft_putchar(g_c[i][j]);
		ft_putchar('\n');
	}
}

void	check_more_main(int argc, int *fd, char a[][7], char *nume)
{
	*fd = open(nume, O_RDONLY);
	main_check(argc, *fd);
	retine_verif(a);
}

int		main(int argc, char* argv[])
{
	int var[4]; /*0 - filedesc, 1 - lm, 2 - x, 3 - i*/
	char buf[BUF_SIZE + 1];
	char a[14][7];
	char **b;

	check_more_main(argc, &var[0], a, argv[1]); /*var[0] = open(argv[1], O_RDONLY); main_check(argc, var[0]); retine_verif(a);*/
	var[2] = 0; /*cate figuri sunt in struct*/
	while((var[3] = read(var[0], buf, BUF_SIZE)))
	{
		if (buf[var[3] - 1] != '\n')
			termina();
		buf[var[3] - 1] = '\0';
		first_check(buf);
		check_connected(buf);
		check_shapes(buf, a, var[2]);
		var[2]++;
	}
	var[1] = lmax(var[2]); /*aici nu stiu!*/
	b = 0;
	b = main_aloca(b, var[1]);
	reset(b, var[1]);
	backtrack(b, 0, &var[1], var[2]);
	main_afiseaza();

	return (0);
}