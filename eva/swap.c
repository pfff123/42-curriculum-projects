/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:58:30 by yafu              #+#    #+#             */
/*   Updated: 2025/11/19 16:10:09 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
swap the first two elements
old_h:old head
new_h:new head
*/
void	swap(t_node **old_h)
{
	t_node	*new_h;

	if (!old_h || !(*old_h) || !((*old_h)->next))
		return ;
	new_h = (*old_h)->next;
	(*old_h)->next = new_h->next;
	new_h->next = (*old_h);
	(*old_h) = new_h;
}

void	sa(t_node **a)
{
	swap(a);
	write (1, "sa\n", 3);
}

void	sb(t_node **b)
{
	swap(b);
	write (1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	swap(a);
	swap(b);
	write (1, "ss\n", 3);
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

// 	print_list(f0);
// 	swap(&f0);
// 	print_list(f0); 
// 	return 0;
// }
