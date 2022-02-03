/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafissie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:15:14 by mafissie          #+#    #+#             */
/*   Updated: 2022/01/30 18:21:02 by johrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_dico_entry	t_dico_entry;

struct s_dico_entry
{
	int		num;
	char	*text;
};

unsigned int	ft_atoi(char *str);
char			*ft_get_str_until(int *i, char *dico, int length, char sep);
t_dico_entry	**ft_allocate_memory(int max_size);
t_dico_entry	**ft_build_dictionnary(char *dico, int max_size);
int				ft_is_line_ok(char *dico, int i);
void			ft_skip_line(char *dico, int *i);
int				ft_register_entry(t_dico_entry *tab_dico, char *dico, int *i);
void			ft_free_dictionnary(t_dico_entry **tab_dico, int size);
int				ft_str_len_until(char *dico, int i, char sep);
char			*ft_create_content_dict(char *files);
int				ft_is_atoi_verif(char *str);
void			ft_search_for_number(t_dico_entry **tab, int size, int num);
int				ft_verif(int argc, char **argv);
int				ft_strlen(char *str);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
int				ft_is_not_open(char *str);
int				ft_verif_argc3(char **argv);
char			*ft_strjoin(char *s1, char *s2, int check);
void			ft_putstr(char *str);
void			ft_take_num_dict(unsigned int nbr, t_dico_entry \
				**tab, int size);
void			ft_take_num_dict_b(unsigned int nbr, t_dico_entry \
				**tab, int size);
void			ft_take_num_dict_m(unsigned int nbr, t_dico_entry \
				**tab, int size);
void			ft_take_num_dict_t(unsigned int nbr, t_dico_entry \
				**tab, int size);
void			ft_take_num_dict_h(unsigned int nbr, t_dico_entry \
				**tab, int size);
void			ft_dizaine(int dizaine, int unite, t_dico_entry \
				**tab, int size);
void			ft_centaine(int centaine, t_dico_entry **tab, int size);
int				ft_process_program(char *dict_name, char *num_char, \
				int max_size);
int				ft_verif_dico(t_dico_entry **tab_dico, int max_size);
#endif
