/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:13:38 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/20 00:45:05 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	if (!s && n == 0)
		return (0);
	p = (char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (char)c;
		i++;
	}
	return (s);
}
