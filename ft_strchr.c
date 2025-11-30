/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:42:42 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/30 17:51:23 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c);

//locate character in string

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while (((unsigned char *)s)[index] &&
		(unsigned char)s[index] != (unsigned char)c)
	{
		index++;
	}
	if (((unsigned char *)s)[index] == (unsigned char)c)
		return ((char *)s + index);
	else
		return (NULL);
}

// int main(void)
// {
// 	char str[] = "hello world!";
// 	char c = 0;

// 	for (; c < 126; c++)
// 	{
// 		printf("letter: %c ascii: %d, ft: %p, original: %p\n",
// 		c, c, ft_strchr(str, c), strchr(str, c));
// 	}
// }