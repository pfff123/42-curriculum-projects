/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   truks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:50:58 by yafu              #+#    #+#             */
/*   Updated: 2025/11/25 18:29:07 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*turk*/
void	sortthree_reverse(t_node **list)
{
	int	small;

	small = find_smallest(*list);
	if (small == 0)
		ra(list);
	else if (small == 1)
		rra(list);
	if ((*list)->data < (*list)->next->data)
		sa(list);
}
/*compare*/
void turk(t_node **a, t_node **b)
{
	int i;

	
}