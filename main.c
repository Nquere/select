/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/04 16:32:03 by nquere            #+#    #+#             */
/*   Updated: 2014/05/04 16:40:23 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

static void		read_keys(char *read_char)
{
	while (read_char[0] >= 0)
	{
		if (!(read(0, read_char, 4)))
			exit(0);
		if (read_char[0] == 27)
			read_char[0] = -1;
	}
}

int				main(int ac, char **av)
{
	char			buffer[2048];
	struct termios	t;
	char			read_char[5];
	t_l				*l;

	*read_char = 0;
	l = NULL;
	if (tgetent(buffer, getenv("TERM")) < 1)
		return (-1);
	term_no_canon(t);
	tputs(tgetstr("ti", NULL), 1, ft_int_putchar);
	tputs(tgetstr("vi", NULL), 1, ft_int_putchar);
	if ((l = (t_l *)malloc(sizeof(t_l))) == NULL)
		return (-1);
	ft_init_list(l);
	display_list(l, ac, av);
	tputs(tgetstr("ks", NULL), 1, ft_int_putchar);
	read_keys(read_char);
	tputs(tgetstr("ke", NULL), 1, ft_int_putchar);
	tputs(tgetstr("ve", NULL), 1, ft_int_putchar);
	tputs(tgetstr("te", NULL), 1, ft_int_putchar);
	term_canon(t);
	return (0);
}
