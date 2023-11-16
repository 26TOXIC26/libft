/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:43:17 by mousaid           #+#    #+#             */
/*   Updated: 2023/11/14 17:06:18 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_lst;
// 	t_list	*new_elem;

// 	if (!lst || !f)
// 		return (NULL);
// 	if (!(new_elem = ft_lstnew(f(lst->content))))
// 	{
// 		ft_lstclear(&new_lst, del);
// 		return (NULL);
// 	}
// 	new_lst = new_elem;
// 	lst = lst->next;
// 	while (lst)
// 	{
// 		if (!(new_elem = ft_lstnew(f(lst->content))))
// 		{
// 			ft_lstclear(&lst, del);
// 			ft_lstclear(&new_lst, del);
// 			break ;
// 		}
// 		lst = lst->next;
// 		ft_lstadd_back(&new_lst, new_elem);
// 	}
// 	return (new_lst);
// }
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
			ft_lstclear(&lst, del);
			ft_lstclear(&new_node, del);
			break ;
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	new_node->next = NULL;
	return (head);
}
// void *multiplyByTwo(void *data)
// {
//     int *num = (int *)data;
//     int *result = (int *)malloc(sizeof(int));
//     if (!result)
//         return (NULL);
//     *result = (*num) + 1;
//     return (result);
// }

// // A function to be used as the deletion function
// void deleteInt(void *data)
// {
//     free(data);
// }

// // A function to print the content of the linked list
// void printList(t_list *list)
// {
//     while (list != NULL)
//     {
//         printf("%s ", (char *)list->content);
//         list = list->next;
//     }
//     printf("\n");
// }
// int main()
// {
//     // Create a linked list
//     t_list *originalList = ft_lstnew(ft_strdup("Ana"));
//     ft_lstadd_back(&originalList, ft_lstnew(ft_strdup("Aba")));
//     ft_lstadd_back(&originalList, ft_lstnew(ft_strdup("Ara")));

//     // Print the original list
//     printf("Original list: ");
//     printList(originalList);

//     // Use ft_lstmap to create a new list by duplicating each string
//     t_list *newList = ft_lstmap(originalList, multiplyByTwo, deleteInt);

//     // Print the new list
//     printf("New list (duplicated strings): ");
//     printList(newList);

//     // Free the memory for the original and new lists
//     ft_lstclear(&originalList, free);
//     ft_lstclear(&newList, deleteInt);

//     return (0);
// }