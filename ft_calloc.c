/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:13:47 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/17 23:53:09 by mousaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	total = size * count;
	if (size && ((total / size) != (count)))
		return (NULL);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
// int main()
// {
//     size_t c = 4;
//     size_t size = 4;

//     int *arr = (int *)ft_calloc(c, size);

//     if (arr == NULL) {
//         printf("ma t aloccatch\n");
//         return (1);
//     }
// 	size_t i = 0;
//     // 3mr dakch li alokiti b values
//     while (i < c)
// 	{
//         arr[i] = i + 1;
// 		i++;
//     }

//     //tb3 dakchi li allociti
// 	i = 0;
//     printf("dakchi li alokiti ha hwa: ");
//     while ( i < c)
// 	{
//         printf("%d ", arr[i]);
// 		i++;
//     }
//     printf("\n");

//     // Free l alloc
//     free(arr);

//   return (0);
// }
