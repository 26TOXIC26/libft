/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:08:55 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/10 19:58:29 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*result;

	i = 0;
	result = NULL;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			result = &s[i];
		i++;
	}
	if ((unsigned char)c == 0)
		return ((char *)&s[i]);
	return ((char *)result);
}
