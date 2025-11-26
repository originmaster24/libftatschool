/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:58:21 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/26 21:26:25 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		((char *) dest)[counter] = ((char *)src)[counter];
		counter++;
	}
	return (dest);
}

// int main(void)
// {
// 	// char str1[] = "helloworld";
// 	// char str2[sizeof(str1)/sizeof(str1[0])];

// 	char str1[] = "helloworld";
// 	char str2[sizeof(str1)/sizeof(str1[0])] = "asdse";
// 	for(int i = 0; i < (int)(sizeof(str1)/sizeof(str1[0])); i++)
// 		if (!str2[i]) 
// 			str2[i] = '\0';

// 	void * addr1 = ft_memcpy(str2, str1, 3);
// 	printf("%p : %s\n", addr1, str2)	;

// 	printf("------\n");

// 	char str3[] = "helloworld";
// 	char str4[sizeof(str3)/sizeof(str3[0])] = "asdse";
// 	for(int i = 0; i < (int)(sizeof(str3)/sizeof(str3[0])); i++)
// 		if (!str4[i]) 
// 			str4[i] = '\0';

// 	void * addr2 = memcpy(str4, str3, 3);
// 	printf("%p : %s\n",addr2, str4)	;

// 	printf("------\n");

// 	addr1 = ft_memcpy(str2, str1, 0);
// 	printf("%p : %s\n", addr1, str2)	;

// 	addr2 = memcpy(str4, str3, 0);
// 	printf("%p : %s\n",addr2, str4)	;
// }
