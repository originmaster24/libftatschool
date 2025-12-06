/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 20:50:14 by zzhu              #+#    #+#             */
/*   Updated: 2025/12/06 20:31:54 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	index = 0;
	if (n == 0)
		return (0);
	while (index < n)
	{
		if (ss1[index] != ss2[index])
			return (ss1[index] - ss2[index]);
		else
			index++;
	}
	return (0);
}

// int main(void)
// {
// 	char *str1 = "!";
// 	char *str2 = "test";
// 	size_t n = 0;

// 	for(;n < 12; n++)
// 	printf("n: %ld, orig: %d ft: %d \n",
// 	n, memcmp(str1, str2, n), ft_memcmp(str1, str2, n));

// 	str1 = "t\200";
// 	str2 = "t\0";
// 	n = 2;
// 	printf("ayoo n: %ld, orig: %d ft: %d \n",
// 	n, memcmp(str1, str2, n), ft_memcmp(str1, str2, n));

// 	//char s[] = {-128, 0, 127, 0};
// 	//char sCpy[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};
// 	printf("yyy, orig: %d ft: %d \n",
// 	 memcmp(s2, s3, 4), ft_memcmp(s2, s3, 4));

// }