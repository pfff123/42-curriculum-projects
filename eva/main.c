#include "push_swap.h"
#include <stdio.h>

void	print_list(t_node *lst)
{
	while (lst)
	{
		printf("%i ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}

t_node	*new_node(int value)
{
	t_node	*tmp;

	tmp = malloc(sizeof(t_node));
	if (!tmp)
		return (NULL);
	tmp->data = value;
	tmp->next = NULL;
	return (tmp);
}

void	printarr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i ++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i ++;
		if (str[i] == '+' || str[i] == '-')
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i ++;
	}
	return (sign * res);
}

// void freelist(t_node **list)
// {
// 	t_node *tmp;

// 	tmp = *list;
// 	while(tmp)
// 	{
// 		free(*list);
// 		tmp = tmp->next;
// 	}
// }

int main(int argc, char **argv)
{
	t_node *list = NULL;
	t_node *list2 = NULL;
	int i;
	int *arr;

	i = 1;
	while(i < argc)
	{
		lstaddback(ft_atoi(argv[i]), &list);
		i ++;
	}
	printf("list:");
	print_list(list);
	arr = list_to_array(list, argc - 1);
	printf("array:");
	printarr(arr, argc - 1);
	printf("\n");
	free(arr);
	push_swap(&list, &list2);
	arr = list_to_array(list, argc - 1);
	printarr(arr, argc - 1);
	freelist(list);
	free(arr);
	return 0;
}