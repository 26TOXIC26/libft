/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:13:47 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/16 22:01:34 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t total;
	total = size * count;
	if (count && size &&  ((total / size) != (count)))
		return (NULL);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
// int main()
// {
//     size_t count = 4;
//     size_t size = 4;

//     // Allocate memory using ft_calloc
//     int *arr = (int *)ft_calloc(count, size);

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;  // Exit with an error code
//     }
// 	size_t i = 0;
//     // Initialize the allocated memory (optional)
//     while (i < count)
// 	{
//         arr[i] = i + 1;
// 		i++;
//     }

//     // Print the values in the allocated memory
// 	i = 0;
//     printf("Allocated memory contents: ");
//     while ( i < count)
// 	{
//         printf("%d ", arr[i]);
// 		i++;
//     }
//     printf("\n");

//     // Free the allocated memory
//     free(arr);

//     return 0;  // Exit successfully
// }
