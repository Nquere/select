/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   term_canon.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/04 16:31:08 by nquere            #+#    #+#             */
/*   Updated: 2014/05/04 16:31:10 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void			term_canon(struct termios term)
{
	tcgetattr(0, &term);
	term.c_lflag |= ICANON;
	term.c_lflag |= ECHO;
	tcsetattr(0, 0, &term);
}
