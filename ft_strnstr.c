/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:53:33 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/22 08:53:44 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_finde, size_t len)
{
	size_t	i;
	size_t	check;
	size_t	to_finde_len;

	i = 0;
	if (!*to_finde)
		return ((char *)str);
	to_finde_len = ft_strlen(to_finde);
	if (!str && !len)
		return (NULL);
	while (str[i] && to_finde_len <= len - i)
	{
		check = 0;
		while (str[i + check] == to_finde[check] && to_finde[check])
			check++;
		if (to_finde_len == check)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
