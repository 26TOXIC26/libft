/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:17:29 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/20 16:21:45 by amousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(char *d, const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 && !s2)
	{
		result = malloc(ft_strlen(s1) + 1);
		ft_strcpy (result, s1);
	}
	else if (!s1 && s2)
	{
		result = malloc(ft_strlen(s2) + 1);
		ft_strcpy (result, s2);
	}
	else
	{
		result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (result == NULL)
			return (NULL);
		ft_strcpy(result, s1);
		ft_strcpy(result + ft_strlen(s1), s2);
	}
	return (result);
}
