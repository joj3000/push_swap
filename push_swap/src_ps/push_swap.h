/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:59:24 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 19:10:34 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUFF_SIZE 32

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef	struct		s_gnl
{
	char			*data;
	int				fd;
	struct s_gnl	*next;
}					t_gnl_list;

typedef struct		s_index
{
	int		i;
	int		j;
	int		argc;
}					t_index;

typedef struct		s_datas
{
	char			*save;
	int				save_index;
	int				pack_size;
	int				nb_appel;
	int				encadreur;
	int				med;
	int				to_put;
	int				x;
	int				i;
	int				n;
}					t_datas;

typedef struct		s_merge
{
	int				ra;
	int				rb;
	int				rra;
	int				rrb;
	int				diff_rr;
	int				diff_rrr;
	int				i;
	int				j;
}					t_merge;

typedef struct		s_rot
{
	int				rotate;
	int				reverse_rotate;
	int				nb_rotate;
	int				nb_reverse_rotate;
}					t_rot;

int					get_next_line(const int fd, char **line);

long long			ft_atoi_swap(const char *str);
void				ft_push_swap(int *origine, int nb);
void				ft_free_double_tab(char **av);
void				ft_norme_boucle1(int *pile1, int *pile2,\
					t_index *index, t_datas *d);
void				ft_norme_boucle2(int *pile1, int *pile2,\
					t_index *index, t_datas *d);
void				ft_norme_boucle3(int *pile1, int *pile2,\
					t_index *index, t_datas *d);
void				ft_norme_boucle4(int *pile1, int *pile2,\
					t_index *index, t_datas *d);
void				ft_norme_boucle4bis(int *pile1, int *pile2,\
					t_index *index, t_datas *d);
void				ft_supp_doublons(char *save, t_merge m);
int					ft_find_which_place_top_of_pa(int to_put,\
					int *pile1, t_index *index, t_datas *d);
int					find_min_in_pile2(int *pile2, t_index *index);
int					find_max_in_pile2(int *pile2, t_index *index);
int					find_closest(int *smallest, int n,\
					int *pile2, t_index *index);
int					find_closest_in_the_n_biggest_to_x(int *pile2,\
					t_index*index, int n, int x);
int					find_closest_in_the_n_smallest_from_x(int *pile2,\
					t_index *index, int n, int x);
void				ft_reput_sorted_to_pile1_for_small2(int *pile1,\
					int *pile2, t_index *index, t_datas *d);
void				ft_reput_sorted_to_pile1_for_small(int *pile1,\
					int *pile2, t_index *index, t_datas *d);
void				ft_replace_pack_in_pile1_for_small(int *pile1,\
					int *pile2, t_index *index, t_datas *d);
void				ft_place_pack_in_pile2_for_small(int *pile1,\
					int *pile2, t_index *index, t_datas *d);

void				ft_reput_sorted_to_pile1(int *pile1, int *pile2,\
					t_index *index, t_datas *d);
void				ft_replace_pack_in_pile1(int *pile1, int *pile2,\
					t_index *index, t_datas *d);
void				ft_place_pack_in_pile2(int *pile1, int *pile2,\
					t_index *index, t_datas *d);
void				ft_merging_instr(char *save, int save_index);

int					ft_is_in_tab(int *tmp, int len, int to_find);
int					*ft_find_biggest_sort_down(int *pile2, t_index n, int *z);
int					*ft_find_biggest_sort_up(int *pile1,\
					int m, int *z, t_index n);
int					ft_find_max_b(int *pile2, t_index n);
int					sim_rb(int *pile1, int j, int sommet);
int					sim_rrb(int *pile1, int j, int sommet);
void				ft_find_road_b(int to_find, int *pile2,\
					t_index *n, t_datas *d);
void				find_road_a(int to_find, int *pile1,\
					t_index *n, t_datas *d);
void				ft_print(int *tab, int nb);
void				ft_put_instr(char *save, int s);
int					ft_is_sort(int *pile, t_index n);
void				ft_sort(int *pile, t_index *n, t_datas *d);
void				ft_cop(int *origine, int *tmp, int nb);
int					ft_transcription(int *tmp, int *origine, int nb);
int					ft_quick_sort_big(int *pile1, int nb);
void				ft_sort_for_less_ten(int *pile1, int nb);
int					ft_quick_sort_small(int *pile1, int nb);
void				ft_sort_for_three_nbrs(int *pile1, int nb);

void				m_ra(int *pile1, t_index *n, t_datas *d);
void				m_rb(int *pile2, t_index *n, t_datas *d);
void				m_rr(int *pile1, int *pile2, t_index *n, t_datas *d);
void				m_rra(int *pile1, t_index *n, t_datas *d);
void				m_rrb(int *pile2, t_index *n, t_datas *d);
void				m_sa(int *pile1, t_index *n, t_datas *d);
void				m_sb(int *pile2, t_index *n, t_datas *d);
void				m_ss(int *pile1, int *pile2, t_index *n, t_datas *d);
void				m_pa(int *pile1, int *pile2, t_index *n, t_datas *d);
void				m_pb(int *pile1, int *pile2, t_index *n, t_datas *d);
void				m_rrr(int *pile1, int *pile2, t_index *n, t_datas *d);

void				i_sa(int *pile1, t_index *n);
void				i_sb(int *pile2, t_index *n);
void				i_ss(int *pile1, int *pile2, t_index *n);
void				i_pa(int *pile1, int *pile2, t_index *n);
void				i_pb(int *pile1, int *pile2, t_index *n);
void				i_ra(int *pile1, t_index *n);
void				i_rb(int *pile2, t_index *n);
void				i_rr(int *pile1, int *pile2, t_index *n);
void				i_rra(int *pile1, t_index *n);
void				i_rrb(int *pile2, t_index *n);
void				i_rrr(int *pile1, int *pile2, t_index *n);

int					*ft_parsing(int argc, char **argv);
int					*ft_parsing_swap(int argc, char **argv);
int					do_instr(int *pile1, int argc);

/*
** LIBFT
*/
int					ft_isdigit(int c);
int					ft_iswp(char c);
void				ft_sorttab(int *s, size_t n);
char				**ft_strsplit(char const *s, char c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_count_word(char const *str, int c);
char				*ft_strnew(size_t size);
char				*ft_strncat(char *dest, const char *src, size_t n);
void				*ft_memalloc(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcpy_p(char *dest, const char *src);
void				*ft_memset(void *s, int c, size_t n);
size_t				ft_strlen_p(const char *s);
void				ft_strdel(char **as);
void				ft_memdel(void **ap);

#endif
