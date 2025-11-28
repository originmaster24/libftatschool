/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:21:29 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/28 10:37:22 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_toupper(int c);

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z' )
		c = c - ('a' - 'A');
	return (c);
}

// int main(void)
// {
// 	char str1 = 0;
// 	for(;str1 < 126; str1++)
// 		printf("letter: '%c' ft: %c, original: %c\n",
// 		str1 , ft_toupper(str1), toupper(str1));
//}