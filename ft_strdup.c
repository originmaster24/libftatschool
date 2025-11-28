/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 22:24:35 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/28 22:47:50 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s);

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(s);
	dest = (malloc((len + 1) * sizeof(char)));
	ft_strlcpy(dest, s, len);
	return (dest);
}

// int main(void)
// {
// 	char str[]= "helloworld!";
// 	char *copy = ft_strdup(str);
// 	printf("%p\n", copy);
// }