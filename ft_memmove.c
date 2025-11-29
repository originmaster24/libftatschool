/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:15:38 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/29 21:19:47 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t	i;
// 	char	*psrc;
// 	char	*pdst;
// 	char	*buff;

// 	psrc = (char *)src;
// 	pdst = (char *)dest;
// 	i = 0;
// 	while (psrc[i])
// 		i++;
// 	buff = (char *)malloc(sizeof(char) * ++i);
// 	ft_bzero(buff, i);
// 	i = -1;
// 	while (++i < n)
// 		buff[i] = psrc[i];
// 	i = -1;
// 	while (++i < n)
// 		pdst[i] = buff[i];
// 	free(buff);
// 	return (pdst);
// }

{
	int		counter;
	char	*copy;

	copy = malloc((n + 1) * sizeof(char));
	ft_bzero(copy, ft_strlen((char *)src) + 1);
	counter = -1;
	while (++counter < (int) n)
		copy[counter] = ((char *) src)[counter];
	counter = -1;
	while (++counter < (int) n)
		((char *)dest)[counter] = ((char *) copy)[counter];
	return (dest);
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