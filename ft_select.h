/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/04 16:31:19 by nquere            #+#    #+#             */
/*   Updated: 2014/05/04 16:31:21 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H

# include <unistd.h>
# include <termcap.h>
# include <stdlib.h>
# include <termios.h>

typedef struct		s_list
{
	char			*data;
	struct s_list	*next;
}					t_list;

typedef struct		s_l
{
	t_list			*start;
	t_list			*end;
	int				size;
}					t_l;

void				ft_init_list(t_l*l);
void				ft_putstr(char const *s);
void				display_list(t_l *l, int ac, char **av);
void				ft_putnbr(int n);
void				ft_putchar(char c);
void				term_no_canon(struct termios term);
void				term_canon(struct termios term);
int					ft_int_putchar(int c);
int					ins_circ_list(t_l *l, char *data);
char				*ft_strcpy(char *s1, const char *s2);
size_t				ft_strlen(const char *s);

#endif
