/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfff <pfff@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/24 23:49:12 by pfff          #+#    #+#                 */
/*   Updated: 2025/11/25 00:01:00 by pfff          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_node *lst)
{
	while (lst)
	{
		printf("%i ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}

t_node	*new_node(int value)
{
	t_node	*tmp;

	tmp = malloc(sizeof(t_node));
	if (!tmp)
		return (NULL);
	tmp->data = value;
	tmp->next = NULL;
	return (tmp);
}

int	find_biggest(t_node *list)
{
	int		tmppos;
	int		maxpos;
	int		max;
	t_node	*tmp;

	tmppos = 0;
	maxpos = 0;
	tmp = list;
	max = tmp->index;
	while (tmp)
	{
		if (tmp->index > max)
		{
			max = tmp->index;
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
	min = tmp->data;
	tmp = list;
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
