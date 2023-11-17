/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:38:18 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/17 23:48:14 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
// int main()
// {
// 	char a[50] = "helloworld";
// 	char b[50] = "head your ass please";
// 	printf("%ld\n",ft_strlcpy(NULL,b,1));
// 	printf("%ld",strlcpy(NULL,b,1));

// }