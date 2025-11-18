/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:17:11 by yafu              #+#    #+#             */
/*   Updated: 2025/11/18 14:53:21 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
rotate, first becomes the last
tmp:old head
last:old tail
*/
void	rotate(t_node **lst)
{
	t_node		*tmp;
	t_node		*last;

	if (!lst || !(*lst) || !((*lst)->next))
		return ;
	tmp = *lst;
	*lst = (*lst)->next;
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
}

void	ra(t_node **a)
{
	rotate(a);
	write (1, "ra\n", 3);
}

void	rb(t_node **b)
{
	rotate(b);
	write (1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	write (1, "rr\n", 3);
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
// 	// f0->next = new_node(1);
// 	// f0->next->next = new_node(3);
// 	f0->next = NULL;

// 	print_list(f0);
// 	rotate(&f0);
// 	print_list(f0); 
// 	return 0;
// }