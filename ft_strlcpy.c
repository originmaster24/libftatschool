/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:29:16 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/28 08:56:22 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	while (src[counter] && counter + 1 < size)
	{
		dst[counter] = src[counter];
		counter++;
	}
	if (size > 0)
		dst[counter] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
// 	char src[] = "hello";
// 	char dest1[] = "123456789abcd";
// 	char dest2[] = "123456789abcd";
// 	int srclen = ft_strlen(src);
// 	int size = 0;

// 	int ftlen = ft_strlcpy(dest1, src, size);
// 	int originlen = strlcpy(dest2, src, size);

// 	printf("%s, %d\n", dest1, ftlen);
// 	write(1, dest1, ftlen);
// 	printf("\n");

// 	printf("%s, %d\n", dest2, originlen);
// 	write(1, dest2, srclen);
// 	printf("\n");
// }
