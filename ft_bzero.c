/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:18:17 by zzhu              #+#    #+#             */
/*   Updated: 2025/12/05 21:08:07 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n);

//n includes the end string delimiter so 
//to bzero [6]hello you need n = 6;

void	ft_bzero(void *s, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		((char *) s)[counter] = '\0';
		counter++;
	}
}

// int main(void)
// {
// 	char str1[] = "helloworld";
// 	char str2[] = "helloworld";
// 	ft_bzero(str1, 3);
// 	bzero(str2, 3);
// 	write(1,str1, sizeof(str1) / sizeof(str1[0]));
// 	printf("\n");
// 	write(1,str2, sizeof(str2) / sizeof(str2[0]));
// 	printf("\n");
// }