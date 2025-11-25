#include "push_swap.h"

int main(int argc, char **argv)
{
	t_node *list = NULL;
	// t_node *list2 = NULL;
	int i;
	int value;
	int *arr;

	if(argc == 1)
		return 0;
	if(argc == 2)
		ft_printf("%i", argv[0][1]);
	i = 1;
	while(i < argc)
	{
		lstaddback(ft_atoi(argv[i]), &list);
		i ++;
	}
	arr = list_to_array(list, argc - 1);
	printarr(arr, argc - 1);

	printf("\n");
	sortarr(arr, argc - 1);
	printarr(arr, argc - 1);
	// if (argc == 3)
	// 	sorttwo(&list);
	// if (argc == 4)
	// 	sortthree(&list);
	// if (argc == 5)
	// 	sortfour(&list, &list2);
	// print_list(list);
	free(list);
	return 0;
}