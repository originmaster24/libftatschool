/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:38:33 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/28 10:41:04 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_tolower(int c);

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z' )
		c = c + ('a' - 'A');
	return (c);
}

// int main(void)
// {
// 	char str1 = 0;
// 	for(;str1 < 126; str1++)
// 		printf("letter: '%c' ft: %c, original: %c\n",
// 		str1 , ft_toupper(str1), toupper(str1));
// }