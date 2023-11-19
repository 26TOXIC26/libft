/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:03:08 by mousaid           #+#    #+#             */
/*   Updated: 2023/11/19 02:07:13 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (new || alst)
	{
		if (*alst == NULL)
		{
			*alst = new;
			return ;
		}
		new->next = *alst;
		*alst = new;
	}
}
// int main()
// {
//     int a = 15;
//     int b = 45;
//     // int c = 785;
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew(&a);
//     t_list *node2 = ft_lstnew(&b);
//     // t_list *node3 = ft_lstnew(&c);
//     ft_lstadd_front(&head, NULL);
//     ft_lstadd_front(&head, node2);
//     ft_lstadd_front(&head, node1);

//     printf("%d", *(int *) head -> content);

// }