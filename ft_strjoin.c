/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:04:15 by zzhu              #+#    #+#             */
/*   Updated: 2025/12/05 20:33:59 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2);
static char	*concatenate(char const *dst, char const *s1, char const *s2);

static char	*concatenate(char const *dst, char const *s1, char const *s2)
{
	size_t	idx;
	size_t	dstidx;

	idx = 0;
	dstidx = 0;
	while (s1[idx])
	{
		((char *)dst)[dstidx++] = s1[idx++];
	}
	idx = 0;
	while (s2[idx])
	{
		((char *)dst)[dstidx++] = s2[idx++];
	}
	((char *)dst)[dstidx++] = '\0';
	return ((char *)(dst));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	totallen;
	char	*result;

	totallen = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = malloc(sizeof(char) * totallen);
	if (!result)
		return (NULL);
	concatenate(result, s1, s2);
	return (result);
}

// int main(void)
// {
// 	char str1[] = "hello";
// 	char str2[] = "world!";
// 	char *combination;
// 	combination = ft_strjoin(str1, str2);
// 	printf("%s\n", combination);
// }