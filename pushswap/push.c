/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:53:40 by yafu              #+#    #+#             */
/*   Updated: 2025/11/18 14:15:36 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
push the first element from src to dst;dst can be empty
src:source
dst:destination
*/
void	push(t_node **src, t_node **dst)
{
	t_node	*tmp;

	if (!src || !(*src))
		return ;
	tmp = *src;
	*src = tmp->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	pa(t_node **a, t_node **b)
{
	push(b, a);
	write (1, "pa\n", 3);
}

void	pb(t_node **a, t_node **b)
{
	push(a, b);
	write (1, "pb\n", 3);
}

// t_node *new_node(int value)
// {
// 	t_node* tmp = malloc(sizeof(t_node*));
// 	tmp->data = value;
// 	tmp->next = NULL;
// 	return (tmp);
// }

// void print_list(t_node *lst)
// {
// 	while(lst)
// 	{
// 		printf("%i ",lst->data);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// int main()
// {
// 	t_node *f0 = new_node(3);
// 	f0->next = new_node(1);
// 	f0->next->next = new_node(3);
// 	f0->next->next->next = NULL;

// 	t_node *q0 = new_node(4);
// 	q0->next = NULL;

// 	print_list(f0);
// 	print_list(q0);
// 	push(&f0,&q0);
// 	print_list(f0); 
// 	print_list(q0);
// 	return 0;
// }
