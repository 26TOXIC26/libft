/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:29:32 by mousaid           #+#    #+#             */
/*   Updated: 2023/11/14 11:20:06 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
		*lst = NULL;
	}
}
// void del(void *content)
// {
//     free(content);
//     printf("rani wslt lhna\n");
//     content = NULL;
// }
// int main()
// {

//     char *pt1 = ft_strdup("test1");
//     char *pt2 = ft_strdup("test2");
//     char *pt3 = ft_strdup("test3");
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew(pt1);
//     t_list *node2 = ft_lstnew(pt2);
//     t_list *node3 = ft_lstnew(pt3);
//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);
//     printf("%p\n", head -> content);
//     printf("%p\n", head -> next -> content);
//     printf("%p\n", head -> next -> next -> content);
//     ft_lstdelone(head, del);

//     printf("%d\n", *((char *)head ->content));
//     printf("%p\n", head -> next -> content);
//     printf("%p\n", head -> next -> next -> content);
// }