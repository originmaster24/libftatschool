/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:42:42 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/28 10:59:53 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while (s[index] && s[index] != c)
	{
		index++;
	}
	if (s[index] == c)
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