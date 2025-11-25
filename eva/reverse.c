/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:17:11 by yafu              #+#    #+#             */
/*   Updated: 2025/11/18 15:18:47 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
rotate, last becomes the first
first:new head
last:new tail
*/
void	reverse(t_node **lst)
{
	t_node		*first;
	t_node		*last;

	if (!lst || !(*lst) || !((*lst)->next))
		return ;
	last = *lst;
	while (last->next->next)
		last = last->next;
	first = last->next;
	last->next = NULL;
	first->next = *lst;
	*lst = first;
}

void	rra(t_node **a)
{
	reverse(a);
	write (1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	reverse(b);
	write (1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	reverse(b);
	reverse(a);
	write (1, "rrr\n", 4);
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
// 	reverse(&f0);
// 	print_list(f0); 
// 	return 0;
// }