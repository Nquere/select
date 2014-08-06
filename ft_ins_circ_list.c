/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ins_circ_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/04 16:30:11 by nquere            #+#    #+#             */
/*   Updated: 2014/05/04 16:30:16 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int		ins_circ_list(t_l *l, char *data)
{
	t_list		*new;

	if ((new = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (-1);
	if ((new->data = (char *)malloc(50 * sizeof(char))) == NULL)
		return (-1);
	ft_strcpy(new->data, data);
	ft_putstr(new->data);
	new->next = new;
	l->end = new;
	l->size++;
	return (0);
}
