/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 23:48:35 by pfff              #+#    #+#             */
/*   Updated: 2025/11/25 18:24:32 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
/*chunk sort 
divide chunk, push elements within the chunk to b
sorting in b
push the biggest back to a;
*/

void	push_back_max(t_node **b, t_node **a)
{
	int	pos_max;
	int	size;

	if (!*b)
		return ;
	pos_max = find_biggest(*b);
	size = lstsize(*b);
	if (pos_max >= (size / 2))
	{
		while (size >= pos_max)
		{
			rrb(b);
			pos_max ++;
		}
	}
	else if (pos_max < (size / 2))
	{
		while (pos_max >= 0)
		{
			rb(b);
			pos_max --;
		}
	}
	pa(b, a);
}

/*
find all the index in the chrunk, put on the top, push to b
*/
int	in_chunck(int start, int end, t_node *a)
{
	if (a->index >= start && a->index <= end)
		return (1);
	else
		return (0);
}
/*go through b, and if the number on the top belongs to chunk, push to a */
void	push_chunck_to_b(int start, int end, t_node *a, t_node *b)
{
	t_node *tmp;
	
	tmp = a;
	while (tmp)
	{
		if (in_chunck(start, end, tmp) == 1)
			pb(&a, &b);
		tmp = tmp->next;
	}
}

void	chunck_sort(t_node **a, t_node **b, int size)
{
	int	chunck_size;
	int	start;
	int	end;
	int i;

	chunck_size = 3;
	i = 3;
	start = 0;
	end = chunck_size - 1;
	if (end > size)
		end = size - 1;
	while (*a)
	{
		push_chunck_to_b(start, end, *a, *b);
		start += chunck_size;
		end += chunck_size;
		if (end > size)
			end = size - 1;
		while(i <= chunck_size)
		{
			push_back_max(b, a);
			i --;
		}
	}
}

void	push_swap(t_node **a, t_node **b)
{
	int	size;
	
	size = lstsize(*a);
	if (find_error(*a))
	{
		write (1, "Error", 6);
		write (1, "\n", 2);
		return ;
	}
	else if (size <= 1)
		return ;
	else if (size == 2)
		sorttwo(a);
	else if (size == 3)
		sortthree(a);
	else if (size == 4)
		sortfour(a, b);
	else if (size == 5)
		sortfive(a, b);
	else
		chunck_sort(a, b, size);
}
