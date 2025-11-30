/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:15:38 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/30 17:24:26 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ddest;
	unsigned char	*ssrc;
	int				counter;

	counter = n;
	ddest = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	if (n == 0 || ddest == ssrc)
		return (ddest);
	if (ssrc == NULL && ddest == NULL)
		return (NULL);
	if (ddest > ssrc && ddest < ssrc + n)
	{
		while (--counter >= 0)
			ddest[counter] = ssrc[counter];
	}
	else
	{
		counter = -1;
		while (++counter < (int)n)
			ddest[counter] = ssrc[counter];
	}
	return ((void *)ddest);
}
// int main(void)
// {
// 	char *src = "helloworld!";
// 	char dest1[20];
// 	char dest2[20];
// 	//char *dest4;
// 	int n = 0;
// 	for(;n < 25; n++)
// 	printf("orig: %s, ft: %s\n", 
// 		(char*)memmove(dest1, src, n), (char *)ft_memmove(dest2, src, n));
// 	}