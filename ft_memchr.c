/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 20:24:56 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/30 17:15:50 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
	{
		return (NULL);
	}
	while (n > 0)
	{
		if (((unsigned char *)s)[index] == (unsigned char)c)
			return ((void *)((unsigned char *)s + index));
		index++;
		n--;
	}
	return (NULL);
}

// int main(void)
// {
// 	char s[] = {0, 1, 2, 3, 4, 5};

// 	// for (unsigned char i = 0; i <= 127 ; i++)
// 	// 	for(size_t n = 0; n <= 11; n++)
// 	// 		printf("match: %c ascii: %d n: %ld, orig: %p, ft: %p\n",
// 	// 			i, i, n, memchr(str, i, n), ft_memchr(str, i, n));
// 	printf("%s\n",
// 	(char *)ft_memchr(s, 0, 0));
// 	printf("%s\n",
// 	(char *)ft_memchr(s, 0, 1));
// 	printf("%s\n",
// 	(char *)ft_memchr(s, 2, 3));
// 	printf("%s\n",
// 	(char *)ft_memchr(s, 6, 6));
// 	printf("%s\n",
// 	(char *)ft_memchr(s, 2 + 256, 3));
// }