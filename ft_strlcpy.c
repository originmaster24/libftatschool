/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:29:16 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/26 22:27:40 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	if (size == 0)
		return (0);
	while (counter < size - 1)
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (strlen(src));
}

// int main(void)
// {
// 	char src[] = "helloworld!";
// 	char dest1[] = "asdasdasd";
// 	char dest2[] = "asdasdasd";
// 	int size = 5;

// 	int ftlen = ft_strlcpy(dest1, src, size);
// 	int originlen = strlcpy(dest2, src, size);

// 	printf("%s, %d\n", dest1, ftlen);
// 	printf("%s, %d\n", dest2, originlen);

// }
