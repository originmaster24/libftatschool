/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 22:06:07 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/28 22:26:08 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (malloc(nmemb * size));
}

// int main(void)
// {
// 	int nmemb = 10;
// 	int size = 10;
// 	char *a = calloc(nmemb, size);
// 	char *b = ft_calloc(nmemb, size);

// 	printf("orig: %p, ft: %p\n", a, b);

// 	free(a);
// 	free(b);
// }