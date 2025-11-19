/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:28:48 by yafu              #+#    #+#             */
/*   Updated: 2025/11/19 19:48:20 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
find the biggest,store at the bottom of a;
then start to compare the first 2 on top a;
push the small one to b;
(at b,big on top small on bottom)

*/

// void	sorttwo(t_node **list)
// {
// 	t_node *second;
	
// 	second = (*list)->next;
// 	if ((*list)->data > second->data)
// 		swap(list);
// 	return ;
// }

t_node* find_biggest(t_node **list)
{
	t_node* biggest;
	
	biggest = malloc(sizeof(t_node*));
	if (!biggest)
		return (NULL);
	biggest = *list;
	while(*list)
	{
		if ((*list)->data > biggest->data)
			biggest = *list;
		*list = (*list)->next;
	}
	return (biggest);
}

void	sortthree(t_node **list)
{
	// t_node *second;
	// t_node *third;
	
	// if (!list || !(*list) || !((*list)->next) || !((*list)->next->next))
	// 	return ;
	// second = (*list)->next;
	// if ((*list)->data > second->data)
	// {
	// 	swap(list);
	// }
	// second = (*list)->next;	
	// third = second -> next;
	// if (second->data > third->data)
	// {
	// 	rotate(list);
	// 	swap(list);
	// 	reverse(list);
	// }
	// second = (*list)->next;
	// if ((*list)->data > second->data)
	// {
	// 	swap(list);
	// }

	t_node *big;
	int i = 0;

	big = find_biggest(list);
	if (!big)
		return ;
	while (big)
	{
		big = big->next;
		i ++;
	}
	printf("%i", i);
	if (i == 1)
	{
		swap(list);
		rotate(list);
	}
	if (i == 2)
	{
		rotate(list);
	}
	if ((*list)->data > (*list)->next->data)
		swap(list);
	free(big);
}

// void	sortfour(t_node)
// {}

t_node *new_node(int value)
{
	t_node* tmp = malloc(sizeof(t_node*));
	if(!tmp)
		return NULL;
	tmp->data = value;
	tmp->next = NULL;
	return (tmp);
}

void print_list(t_node *lst)
{
	while(lst)
	{
		printf("%i ",lst->data);
		lst = lst->next;
	}
	printf("\n");
}

int main()
{
	t_node *f0 = new_node(8);
	f0->next = new_node(1);
	f0->next->next = new_node(-1);
	f0->next->next->next = NULL;

	// t_node *q0 = new_node(4);
	// q0->next = NULL;

	print_list(f0);
	// print_list(q0);
	sortthree(&f0);
	print_list(f0); 
	// print_list(q0);
	// free(f0);
	// free(f0->next);
	// free(f0->next->next);
	// free(f0->next->next->next);
	return 0;
}