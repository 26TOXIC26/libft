/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:42:05 by mousaid           #+#    #+#             */
/*   Updated: 2023/11/19 02:10:21 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
// void del(void *content)
// {
//     free(content);
//     printf("rani wslt lhna\n");
//     content = NULL;
// }
// int main()
// {
//     int n = 8;
//     char *pt = ft_strdup("test");
//     t_list *head = ft_lstnew(pt);
//     printf("%p\n", head -> content);
//     ft_lstdelone(head, del);
//     printf("%d\n", *((char *)head ->content));
// }