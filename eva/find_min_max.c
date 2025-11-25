/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 23:49:12 by pfff              #+#    #+#             */
/*   Updated: 2025/11/25 17:17:55 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest(t_node *list)
{
	int		maxpos;
	int		tmppos;
	int		max;
	t_node	*tmp;

	maxpos = 0;
	tmppos = 0;
	if (!(list) || !(list->next))
		return (-1);
	tmp = list;
	max = list->data;
	while (tmp)
	{
		if (tmp->data > max)
		{
			max = tmp->data;
			maxpos = tmppos;
		}
		tmp = tmp->next;
		tmppos ++;
	}
	return (maxpos);
}

int	find_smallest(t_node *list)
{
	int		tmppos;
	int		minpos;
	int		min;
	t_node	*tmp;

	tmppos = 0;
	minpos = 0;
	tmp = list;
	min = list->data;
	while (tmp)
	{
		if (tmp->data < min)
		{
			min = tmp->data;
			minpos = tmppos;
		}
		tmp = tmp->next;
		tmppos ++;
	}
	return (minpos);
}

int find_error(t_node *list)
{
	t_node *tmp;

	tmp = list;
	while (tmp)
	{
		if (tmp->data < -2147483648 || tmp->data > 2147483647)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
