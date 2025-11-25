/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:20:05 by yafu              #+#    #+#             */
/*   Updated: 2025/11/25 17:33:50 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include "ft_printf/ft_printf.h"
# include <limits.h>

typedef struct s_node
{
	int				data;
	int				index;
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

void	sorttwo(t_node **list);
void	sortthree(t_node **list);
void	sortfour(t_node **a, t_node **b);
void	sortfive(t_node **a, t_node **b);

int		find_smallest(t_node *list);
int		find_biggest(t_node *list);
int		lstsize(t_node *lst);
void	lstaddback(int value, t_node **list);
int		*list_to_array(t_node *list, int size);

void	push_back_max(t_node **b, t_node **a);
int		in_chunck(int start, int end, t_node *a);
void	push_chunck_to_b(int start, int end, t_node *a, t_node *b);
void	chunck_sort(t_node **a, t_node **b, int size);
void	push_swap(t_node **a, t_node **b);
int		find_error(t_node *list);

void	print_list(t_node *lst);
t_node	*new_node(int value);
void	printarr(int *arr, int size);
void	freelist(t_node *list);
#endif