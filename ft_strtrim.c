/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:12:15 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/11 03:12:05 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
// static char	ft_cheak(char c, char *set)
// {
// 	while (*set)
// 	{
// 		if (c == *set)
// 			return (1);
// 		set++;
// 	}
// 	return (0);
// }

// static char	*ft_empty(void)
// {
// 	char	*str;

// 	str = malloc(sizeof(char));
// 	if (!str)
// 		return (NULL);
// 	str[0] = '\0';
// 	return (str);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	start;
// 	size_t	end;
// 	size_t	i;
// 	char	*ptr;

// 	start = 0;
// 	i = 0;
// 	end = ft_strlen(s1) - 1;
// 	if (s1 == NULL || set == NULL)
// 		return (NULL);
// 	while (s1[start] && ft_cheak(s1[start], (char *)set) == 1)
// 		start++;
// 	if (start == ft_strlen(s1))
// 		return (ft_empty());
// 	while (ft_cheak(s1[end], (char *)set) == 1)
// 		end--;
// 	ptr = malloc((end - start + 1) * sizeof(char));
// 	if (!ptr)
// 		return (NULL);
// 	while (start <= end)
// 		ptr[i++] = s1[start++];
// 	ptr[i] = '\0';
// 	return (ptr);
// }
// static char    *ft_empty(void)
// {
//     char    *str;

//     str = malloc(sizeof(char));
//     if (!str)
//         return (NULL);
//     str[0] = '\0';
//     return (str);
// }

// static int	ft_checkset(char const *set, char const c)
// {
// 	int	i;

// 	i = 0;
// 	while (set[i])
// 	{
// 		if (set[i] == c)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	s1len;
// 	char	*result;
// 	size_t	i;
// 	size_t	j;

// 	if (set == NULL || s1 == NULL)
// 		return (NULL);
// 	i = 0;
// 	s1len = ft_strlen(s1) - 1;
// 	j = 0;
// 	while (s1[i] && ft_checkset(set, s1[i]) == 1)
// 		i++;
// 	if (i == ft_strlen(s1))
//         return (ft_empty());
// 	while (s1[s1len - 1] && ft_checkset(set, s1[s1len - 1]) == 1)
// 	result = malloc((s1len - i + 1) * sizeof (char));
// 	if (result == NULL)
// 		return (NULL);
// 	while (i < s1len + 1)
// 		result[j++] = s1[i++];
// 	result[j] = '\0';
// 	return (result);
// }
