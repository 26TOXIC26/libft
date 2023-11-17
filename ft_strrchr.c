/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:08:55 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/17 16:59:07 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*result;

	i = 0;
	result = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			result = &s[i];
		i++;
	}
	if ((char)c == 0)
		return ((char *)&s[i]);
	return ((char *)result);
}
