/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:14:54 by mousaid           #+#    #+#             */
/*   Updated: 2023/11/13 07:04:45 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
// int main()
// {
//     int a = 15;
//     int b = 45;
//     int c = 785;
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew(&a);
//     t_list *node2 = ft_lstnew(&b);
//     t_list *node3 = ft_lstnew(&c);
//     ft_lstadd_front(&head, node3);
//     ft_lstadd_front(&head, node2);
//     ft_lstadd_front(&head, node1);

//     t_list *end = ft_lstlast(head);
//     printf("%d\n", *(int *)end->content);

// }