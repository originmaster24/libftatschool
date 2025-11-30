/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:12:51 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/30 18:16:55 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bidx;
	size_t	lidx;

	bidx = 0;
	lidx = 0;
	if (ft_strlen(little) == 0)
		return ((char *)(big));
	while (big[bidx] && bidx < len)
	{
		lidx = 0;
		while (bidx + lidx < len
			&& (little[lidx] != '\0')
			&& little[lidx] == big[bidx + lidx])
			lidx++;
		if (little[lidx] == '\0')
			return ((char *)(big + bidx));
		bidx++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char big[] = "helloworld!";
// 	char little[] = "llo";
// 	size_t len = 0;

// 	for(;len < 12; len++)
// 		printf("len: %ld, big: '%s', little: '%s', orig: '%s', ft: '%s'\n",
// 			len, big, little,
// 			strnstr(big, little, len), ft_strnstr(big, little, len));

// }