/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 20:24:56 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/28 20:41:22 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t index;

	index = 0;
	if (n == 0)
		return (NULL);
	while (((char *)s)[index] && n >= 1)
	{
		if(((char *)s)[index] == c)
			return ((void *)s + index);
		index++;
		n--;
	}
	return (NULL);
}

int main(void)
{
	char str[] = "helloworld!";

	for (unsigned char i = 0; i <= 127 ; i++)
		for(size_t n = 0; n <= 11; n++)
			printf("match: %c ascii: %d n: %ld, orig: %p, ft: %p\n",
				i, i, n, memchr(str, i, n), ft_memchr(str, i, n));
	
}