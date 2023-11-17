/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousaid <mousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:17:29 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/17 02:05:17 by mousaid          ###   ########.fr       */
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
	size_t	slen1;
	size_t	slen2;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	result = malloc(slen1 + slen2 + 1);
	if (result == NULL)
		return (NULL);
	ft_strcpy(result, s1);
	ft_strcpy(result + slen1, s2);
	return (result);
}
// int main()
// {
// 	char str1[] = "Hello, ";
// 	char str2[] = "World!";
// 	char *result = ft_strjoin(str1, str2);
// 	printf("%s\n", result);
// 	char *missing_string = ft_strjoin(NULL, str2);
// 	printf("%s", missing_string);
// 	printf("\n");
// }	