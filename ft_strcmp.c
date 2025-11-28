/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:16:54 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/28 11:47:22 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2);

int	ft_strcmp(const char *s1, const char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] && s2[index]) && (s1[index + 1] != '\0'))
		index++;
	printf("%c,%c\n", s1[index], s2[index]);
	return ((int)((int)(s1[index]) - (int)(s2[index])));
}

// int main(void)
// {
// 	char str1[] = "ABC";
// 	char str2[] = "AB";
// 	char str3[] = "ABZ";
// 	char str4[] = "ABC";
// 	char str5[] = "ABJ";
// 	char str6[] = "ABA";

// 	printf("str1 %s, str2 %s, orig: %d, ft: %d\n",
// 		 str1, str4, strcmp(str1, str4), ft_strcmp(str1, str4));

// 	printf("str1 %s, str2 %s, orig: %d, ft: %d\n",
// 		 str1, str2, strcmp(str1, str2), ft_strcmp(str1, str2));

// 	printf("str1 %s, str2 %s, orig: %d, ft: %d\n",
// 		 str6, str3, strcmp(str6, str3), ft_strcmp(str6, str3));

// 	printf("str1 %s, str2 %s, orig: %d, ft: %d\n",
// 		str5, str1, strcmp(str5, str1), ft_strcmp(str5, str1));

// 	// printf("str1 %s, str2 %s, orig: %d, ft: %d\n",
// 	// "\201", "A", strcmp("\201", "A"), ft_strcmp("\201", "A"));	
// }