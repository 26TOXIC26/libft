/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 00:00:40 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/08 02:13:39 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_finde, size_t len)
{
	size_t	i;
	size_t	check;
	size_t	to_finde_len;

	i = 0;
	to_finde_len = ft_strlen(to_finde);
	if (!*to_finde)
		return ((char *)str);
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
