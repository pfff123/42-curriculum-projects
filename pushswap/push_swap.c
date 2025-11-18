/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:28:48 by yafu              #+#    #+#             */
/*   Updated: 2025/11/18 18:25:38 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
find the biggest,store at the bottom of a;
then start to compare the first 2 on top a;
push the small one to b;
(at b,big on top small on bottom)

*/

void	sorttwo(t_node **list)
{
	t_node *second;
	
	second = (*list)->next;
	if ((*list)->data > second->data)
		swap(list);
	return ;
}

void	sortthree(t_node **list)
{
	t_node *second;
	t_node *third;
	
	if (!list || !(*list) || !((*list)->next) || !((*list)->next->next))
		return ;
	second = (*list)->next;
	third = second->next; 
	if ((*list)->data > second->data)
		swap(list);
	if (second->data > third->data)
	{
		rotate(list);
		swap(list);
		reverse(list);
	}
}

int main