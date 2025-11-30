/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:16:54 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/30 11:44:00 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	index;

	index = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[index] == (unsigned char)s2[index] && n > 1)
	{
		index++;
		n--;
	}
	return ((((unsigned char *)s1)[index]) - ((unsigned char *)s2)[index]);
}

// int main(void)
// {
// 	char str1[] = "ABC";
// 	char str2[] = "CB";
// 	char str3[] = "ABZ";
// 	char str4[] = "ABC";
// 	char str5[] = "ABJ";
// 	char str6[] = "ABA";
// 	int n = 0;

// 	for (;n < 6; n++)
// 	{
// 		printf("n %d, str1 %s, str2 %s, orig: %d, ft: %d\n",
// 			n, str1, str4, strncmp(str1, str4, n), ft_strncmp(str1, str4, n));

// 		printf("n %d, str1 %s, str2 %s, orig: %d, ft: %d\n",
// 			n, str1, str2, strncmp(str1, str2, n), ft_strncmp(str1, str2, n));

// 		printf("n %d, str1 %s, str2 %s, orig: %d, ft: %d\n",
// 			n, str6, str3, strncmp(str6, str3, n), ft_strncmp(str6, str3, n));

// 		printf("n %d, str1 %s, str2 %s, orig: %d, ft: %d\n",
// 			n, str5, str1, strncmp(str5, str1, n), ft_strncmp(str5, str1, n));
// 	}
// 	printf("str1 %s, str2 %s, orig: %d, ft: %d\n",
// 	"\201", "A", strncmp("\201", "A", 1), ft_strncmp("\201", "A", 1));	
// }