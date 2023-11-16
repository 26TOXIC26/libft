/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:45:01 by mousaid           #+#    #+#             */
/*   Updated: 2023/11/13 22:24:24 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			head = ft_lstlast(*(lst));
			head->next = new;
		}
	}
}
// int main()
// {
//     int a = 15;
//     int b = 45;
//     int c = 785;
//     int d = 1337;
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew(&a);
//     t_list *node2 = ft_lstnew(&b);
//     t_list *node3 = ft_lstnew(&c);
//     t_list *node4 = ft_lstnew(&d);
//     ft_lstadd_front(&head, node3);
//     ft_lstadd_front(&head, node2);
//     ft_lstadd_front(&head, node1);
//     ft_lstadd_back(&head, node4);
//     t_list *end = ft_lstlast(head);
//     printf("%d\n", *(int *)end->content);
// }