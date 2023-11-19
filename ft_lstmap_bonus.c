/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:43:17 by mousaid           #+#    #+#             */
/*   Updated: 2023/11/19 01:32:01 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_node = ft_lstnew(f(lst->content));
	if (!new_node)
		return (NULL);
	head = new_node;
	lst = lst->next;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_node, del);
			break ;
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	new_node->next = NULL;
	return (head);
}
// void *zid_wahd(void *data)
// {
// 	int i = 0;
//     char *num = (char *)data;
//     char *result = malloc(sizeof(data));
//     if (!result)
// 	{
//         return (NULL);
// 	}
// 	while (num[i])
// 	{
// 		result[i] = num[i] + 1;
// 		i++;
// 	}

//     return (result);
// }

// // ft li radi nfree biha
// void freedata(void *data)
// {
//     free(data);
// }

// ft li radi nprantiw biha result
void	printList(t_list *list)
{
	while (list != NULL)
	{
		printf("%s ", (char *)list->content);
		list = list->next;
	}
	printf("\n");
}
// int main()
// {
//     // 9ad new list
//     t_list *firstlist = ft_lstnew(ft_strdup("Ana"));
//     ft_lstadd_back(&firstlist, ft_lstnew(ft_strdup("Aba")));
//     ft_lstadd_back(&firstlist, ft_lstnew(ft_strdup("Ara")));

//     // Print the original list
//     printf("firstlist: ");
//     printList(firstlist);

//     // khdm b lstmap hna
//     t_list *newList = ft_lstmap(firstlist, zid_wahd, freedata);

//     // Print the new list
//     printf("New list (duplicated strings): ");
//     printList(newList);

//     // Free lmemory li allociti
//     ft_lstclear(&firstlist, free);
//     ft_lstclear(&newList, freedata);

//     return (0);
// }