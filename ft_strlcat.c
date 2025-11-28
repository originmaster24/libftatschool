/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 08:22:50 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/28 09:57:57 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	rsize;
	size_t	dstlen;

	rsize = 0;
	dstlen = ft_strlen(dst);
	counter = 0;
	while ((int)size - 1 - (int)ft_strlen(dst) > 0)
	{
		dst[dstlen + counter] = src[counter];
		counter++;
	}
	if (size > 0)
		dst[dstlen + counter] = '\0';
	if (size < ft_strlen(src) && size <= dstlen)
		rsize = size;
	if (size > dstlen + 1)
		rsize = size - 2;
	else
		rsize = size;
	return ((size_t)(rsize + ft_strlen(src)));
}

// int main(void)
// {
// 	char src[] = "helloworld";
// 	//char src[] = "0123456789abcdef";
// 	//char dst1[20] = "helloworld";
// 	char dst1[] = "0123456789abcdef";
// 	//char dst2[20] = "helloworld";
// 	char dst2[] = "0123456789abcdef";

// 	size_t size = 0;
// 	size_t ftcatlen;
// 	size_t catlen;

// 	for(;size < 20; size++)
// 	{
// 		ftcatlen = ft_strlcat(dst1, src, size);
// 		catlen = strlcat(dst2, src, size);
// 		printf("size: %lu\n", size);
// 		printf("ft: %s, %lu\n", dst1, ftcatlen);
// 		printf("original: %s, %lu\n", dst2, catlen);
// 		printf("\n");
// 	}

// 	// size = 5;
// 	// ftcatlen = ft_strlcat(dst1, src, size);
// 	// catlen = strlcat(dst2, src, size);
// 	// printf("size: %lu\n", size);
// 	// printf("ft: %s, %lu\n", dst1, ftcatlen);
// 	// printf("original: %s, %lu\n", dst2, catlen);
// 	// printf("\n");
// }