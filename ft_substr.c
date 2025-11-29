/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 10:43:36 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/29 11:03:38 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	n;

	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	n = ft_strlcpy(result, s + start, len + 1);
	printf("%ld\n", n);
	return (result);
}

// int	main(void)
// {
// 	char str[] = "helloworld!";
// 	char *sub;

// 	sub = ft_substr(str, 5, 5);
// 	printf("%s\n", sub);
// 	free(sub);
// }
