/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:08:38 by yafu              #+#    #+#             */
/*   Updated: 2025/11/25 14:14:59 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lstaddback(int value, t_node **list)
{
	t_node	*new;
	t_node	*tmp;

	new = new_node(value);
	if (!new)
		return ;
	if (!list)
		return ;
	tmp = *list;
	if (!(*list))
	{
		*list = new;
		return ;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

int	lstsize(t_node *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i ++;
		lst = lst -> next;
	}
	return (i);
}

