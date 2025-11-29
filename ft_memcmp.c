/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 20:50:14 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/29 20:39:22 by zzhu             ###   ########.fr       */
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
	while (((unsigned char *)s1)[index] && n >= 2)
	{
		if (((unsigned char *)s1)[index] != ((unsigned char *)s2)[index])
			break ;
		index++;
		n--;
	}
	return (((unsigned char *)s1)[index] - ((unsigned char *)s2)[index]);
}

// int main(void)
// {
// 	char *str1 = "helloworld!";
// 	char *str2 = "helloaworld";
// 	size_t n = 0;

// 	for(;n < 12; n++)
// 	printf("n: %ld, orig: %d ft: %d \n",
// 	n, memcmp(str1, str2, n), ft_memcmp(str1, str2, n));

// 	str1 = "t\200";
// 	str2 = "t\0";
// 	n = 2;
// 	printf("ayoo n: %ld, orig: %d ft: %d \n",
// 	n, memcmp(str1, str2, n), ft_memcmp(str1, str2, n));
// }