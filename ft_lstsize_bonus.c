/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 03:26:58 by mousaid           #+#    #+#             */
/*   Updated: 2023/11/13 05:59:47 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*head;
	int		result;

	head = lst;
	result = 0;
	if (!lst)
		return (0);
	while (head != NULL)
	{
		result++;
		head = head->next;
	}
	return (result);
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

//     printf("%d\n", ft_lstsize(head));

// }