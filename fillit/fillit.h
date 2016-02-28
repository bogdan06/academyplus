#ifndef FILLIT_H
#define FILLIT_H
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct	s_fig{
	char		f[4][4];
	int			m;
	int			n;
}				t_fig;

extern			char **g_c;
extern			int g_min;
extern			t_fig g_figuri[26];

void	termina();
void	second_check_elim(int, int, char *, int);
void	retine_verif(char [][7]);
void	second_check_vertical(char *);
void	second_check(char *);
void	first_check(char *);
void	check_shapes(char *, char [][7], int);
void	check_connected(char *);
void	build_matrices(char *, int);
int		check_existing(char **, int, int, int);
int		can_place(char **, int, int, int, int);
void	place_figure(char **, int, int, int);
int		lmax(int);
void	copiere(char **, int);
void	clean(char **, int, int);
int		exista(char **, int);
void	fpatrat(char **, int *);
void	reset(char **, int);
void	backtrack(char **, int, int *, int);
void	main_check(int, int);
char	**main_aloca(char **, int);
void	main_afiseaza();
void	check_more_main(int, int *, char [][7], char *);
void	ft_putchar(char);
void	ft_putstr(char *);
char	*ft_strcpy(char *, const char *);
int		ft_strcmp(const char *, const char *);

#endif