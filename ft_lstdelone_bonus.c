/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:42:05 by mousaid           #+#    #+#             */
/*   Updated: 2023/11/13 23:33:03 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
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