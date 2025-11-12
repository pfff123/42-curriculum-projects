/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:06:49 by pfff              #+#    #+#             */
/*   Updated: 2025/10/09 07:55:32 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list *a = ft_lstnew(ft_strdup("A"));
// 	t_list *b = ft_lstnew(ft_strdup("B"));
// 	t_list *c = ft_lstnew(ft_strdup("C"));
// 	a->next = b;
// 	b->next = c;	
// 	t_list *d = ft_lstnew(ft_strdup("D"));
// 	ft_lstadd_back(&a,d);	
// 	t_list *lst = a;
// 	while(lst)
// 	{
// 		printf("%s " ,(char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("%i ",ft_lstsize(a));
// 	printf("%s",(char *)ft_lstlast(a)->content);
// }