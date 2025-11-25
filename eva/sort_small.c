/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:28:48 by yafu              #+#    #+#             */
/*   Updated: 2025/11/25 17:08:54 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
/*
find the biggest,store at the bottom of a;
then start to compare the first 2 on top a;
push the small one to b;
(at b,big on top small on bottom)
*/
void	sorttwo(t_node **list)
{
	t_node	*second;

	second = (*list)->next;
	if ((*list)->data > second->data)
		sa (list);
	return ;
}

void	sortthree(t_node **list)
{
	int	big;

	big = find_biggest(*list);
	if (big == 0)
		ra(list);
	else if (big == 1)
		rra(list);
	if ((*list)->data > (*list)->next->data)
		sa(list);
}

void	sortfour(t_node **a, t_node **b)
{
	int		minpos;

	minpos = find_smallest(*a);
	while (minpos > 0)
	{
		rotate(a);
		minpos --;
	}
	push(a, b);
	sortthree(a);
	push(b, a);
}

void	sortfive(t_node **a, t_node **b)
{
	int	minpos;

	minpos = find_smallest(*a);
	while (minpos > 0)
	{
		rotate(a);
		minpos --;
	}
	push(a, b);
	sortfour(a, b);
	push(b, a);
}

// t_node *new_node(int value)
// {
// 	t_node* tmp = malloc(sizeof(t_node*));
// 	if(!tmp)
// 		return NULL;
// 	tmp->data = value;
// 	tmp->next = NULL;
// 	return (tmp);
// }
// int main()
// {
// 	t_node *f0 = new_node(3);
// 	f0->next = new_node(1);
// 	f0->next->next = new_node(7);
// 	f0->next->next->next = new_node(-2);
// 	f0->next->next->next->next = new_node(9);
// 	f0->next->next->next->next->next = NULL;

// 	t_node *q0 = NULL;

// 	print_list(f0);
// 	// print_list(q0);
// 	// printf("%i", find_biggest(f0)); 
// 	sortfive(&f0,&q0);
// 	print_list(f0);
// 	// print_list(q0);
// 	// free(f0);
// 	// free(f0->next);
// 	// free(f0->next->next);
// 	// free(f0->next->next->next);
// 	return 0;
// }