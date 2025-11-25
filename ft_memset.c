/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:17:11 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/25 20:48:07 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		((char *) s)[index] = c;
		index++;
	}
	return (s);
}

// int main(void)
// {
// 	char sub = 'k';
// 	size_t position = 5;

// 	char arr1[] = "helloworld";
// 	char arr2[] = "helloworld";

// 	printf("%s\n", (char *) memset(arr1, sub, position));
// 	printf("%s\n", (char *) ft_memset(arr2, sub, position));

// }