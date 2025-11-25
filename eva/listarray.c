/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listarray.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 23:51:42 by pfff              #+#    #+#             */
/*   Updated: 2025/11/25 17:33:44 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freelist(t_node *list)
{
	t_node	*tmp;

	tmp = NULL;
	while (list)
	{
		tmp = (list)->next;
		free(list);
		list = tmp;
	}
}
/*make an array from linked list*/
int	*list_to_array(t_node *list, int size)
{
	int	*res;
	int	n;

	n = 0;
	res = malloc(sizeof(int) * size);
	if (!res)
		return (NULL);
	if (!list)
	{
		res = malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	while (list)
	{
		res[n] = list->data;
		list = list->next;
		n ++;
	}
	return (res);
}

/*bubble sort the array*/
void	sortarr(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;
	int	swap;

	j = 0;
	while (j < size - 1)
	{
		i = 0;
		swap = 0;
		while (i < size - 1 - j)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swap = 1;
			}
			i ++;
		}
		if (!swap)
			break ;
		j ++;
	}
}

/*
give index info from array to linked list
*/
void	assign_index(int *arr, t_node *list, int size)
{
	int		i;
	t_node	*tmp;

	i = 0;
	while (i < size)
	{
		tmp = list;
		while (tmp)
		{
			if (tmp->data == arr[i])
			{
				tmp->index = i;
				break ;
			}
			tmp = tmp->next;
		}
		i ++;
	}
}
