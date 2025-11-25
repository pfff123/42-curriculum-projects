/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pushswap.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pfff <pfff@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/24 23:51:42 by pfff          #+#    #+#                 */
/*   Updated: 2025/11/25 10:21:32 by pfff          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freelist(t_node *list)
{
	t_node	*tmp;

	tmp = NULL;
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
}

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

void	printarr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_printf("%d ", arr[i]);
		i++;
	}
}

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
5379324732
0123456789

2233345779
0123456789
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
