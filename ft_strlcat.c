/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 08:22:50 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/29 23:11:49 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		counter;
	size_t	dstlen;
	size_t	detcounter;

	detcounter = 0;
	while (dst[detcounter])
		detcounter++;
	if (size <= detcounter)
		return (size + ft_strlen(src));
	dstlen = ft_strlen(dst);
	counter = 0;
	while (src[counter] && detcounter + 1 < size)
	{
		dst[detcounter + counter] = src[counter];
		detcounter++;
		counter++;
	}
	if(detcounter < size )
	{
		dst[detcounter] = '\0';
		detcounter++;
	}
	return (dstlen + ft_strlen(src));
}

int main(void)
{
	char src[] = "helloworld";
	//char src[] = "0123456789abcdef";
	//char dst1[20] = "helloworld";
	//char dst1[30] = "01234";
	//char dst2[20] = "helloworld";
	//char dst2[30] = "01234";

	size_t size = 0;
	size_t ftcatlen;
	size_t catlen;
	char *dst1 = malloc(20*sizeof(char));
	char *dst2 = malloc(20*sizeof(char));

	for(;size < 15; size++)
	{
		ft_strlcpy(dst1, "1234", 5);
		ft_strlcpy(dst2, "1234", 5);
		ftcatlen = ft_strlcat(dst1, src, size);
		catlen = strlcat(dst2, src, size);
		printf("size: %lu\n", size);
		printf("ft: %s, %lu\n", dst1, ftcatlen);
		printf("original: %s, %lu\n", dst2, catlen);
		printf("\n");
	}

	// size = 5;
	// ftcatlen = ft_strlcat(dst1, src, size);
	// catlen = strlcat(dst2, src, size);
	// printf("size: %lu\n", size);
	// printf("ft: %s, %lu\n", dst1, ftcatlen);
	// printf("original: %s, %lu\n", dst2, catlen);
	// printf("\n");
}