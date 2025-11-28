/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 20:50:14 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/28 21:10:40 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (0);
	while (((char *)s1)[index] && n >= 2)
	{
		if (((char *)s1)[index] != ((char *)s2)[index])
			break ;
		index++;
		n--;
	}
	return (((char *)s1)[index] - ((char *)s2)[index]);
}

// int main(void)
// {
// 	char str1[] = "helloworld!";
// 	char str2[] = "helloaworld";
// 	size_t n = 0;

// 	for(;n < 12; n++)
// 	printf("n: %ld, orig: %d ft: %d \n",
// 	n, memcmp(str1, str2, n), ft_memcmp(str1, str2, n));
// }