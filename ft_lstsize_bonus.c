/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 03:26:58 by amousaid           #+#    #+#             */
/*   Updated: 2023/11/20 16:22:40 by amousaid          ###   ########.fr       */
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
