/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:38:43 by pfff              #+#    #+#             */
/*   Updated: 2025/10/11 09:36:06 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_list;
	void	*tmp;

	new_list = NULL;
	while (lst)
	{
		tmp = f(lst -> content);
		if (!tmp)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		node = ft_lstnew(tmp);
		if (!node)
		{
			del(tmp);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst -> next;
	}
	return (new_list);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void    *add_prefix(void *content)
// 	{
// 		char *s = (char *)content;
// 		char *new = malloc(ft_strlen(s) + 3);
// 		if (!new)
// 			return (NULL);
// 		new[0] = '_';
// 		new[1] = '_';
// 		strcpy(new + 2, s);
// 		return (new);
// 	}

// int main()
// {
// 	t_list *a = ft_lstnew(ft_strdup("A"));
// 	t_list *b = ft_lstnew(ft_strdup("NULL"));
// 	t_list *c = ft_lstnew(ft_strdup("C"));
// 	t_list *d = ft_lstnew(ft_strdup("D"));
// 	t_list *e = ft_lstnew(ft_strdup("E"));
// 	a -> next = b;
// 	b -> next = c;
// 	c -> next = d;
// 	d -> next = e;

// 	t_list *lst = a;
// 	t_list *newlst = ft_lstmap(a, add_prefix, free);

// 	while(newlst)
// 	{
// 		printf("%s " ,(char *)newlst->content);
// 		newlst = newlst->next;
// 	}
// }