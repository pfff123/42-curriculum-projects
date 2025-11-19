/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:20:05 by yafu              #+#    #+#             */
/*   Updated: 2025/11/19 16:11:15 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_node;

void	swap(t_node **old_h);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	push(t_node **src, t_node **dst);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	rotate(t_node **lst);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	reverse(t_node **lst);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

void	sortthree(t_node **list);


#endif