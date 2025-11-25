/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   chunk.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfff <pfff@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/24 23:48:35 by pfff          #+#    #+#                 */
/*   Updated: 2025/11/25 10:20:17 by pfff          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
分chunk，把chunk内的部分移到b
sorting in b
push the biggest back to a;
then 

12363

3->0
2

16532
1->0
1
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
	while (a)
	{
		if (a->index >= start && a->index <= end)
			return (1);
		a = a->next;
	}
	return (0);
}

void	push_chunck_to_b(int start, int end, t_node *a, t_node *b)
{
	while (a)
	{
		if (in_chunck(start, end, a))
			pa(a, b);
		a = a->next;
	}
}

void	chunck_sort(t_node **a, t_node **b, int size)
{
	int	chunck_size;
	int	start;
	int	end;

	if (size <= 100)
		chunck_size = 20;
	else
		chunck_size = 40;
	start = 0;
	end = chunck_size - 1;
	if (end > size)
		end = size - 1;
	while (*a)
	{
		push_chunck_to_b(start, end, a, b);
		push_back_max(b, a);
		start += chunck_size;
		end += chunck_size;
		if (end > size)
			end = size - 1;
	}
}

void	push_swap(t_node *a, t_node *b, int size)
{
	size = lstsize(a);
	if (size <= 1)
		return ;
	else if (size == 2)
		sorttwo(&a);
	else if (size == 3)
		sortthree(&a);
	else if (size == 4)
		sortfour(&a, &b);
	else if (size == 5)
		sortfive(&a, &b);
	else
		chunck_sort(a, b, size);
}
