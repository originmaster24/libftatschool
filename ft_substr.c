/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 10:43:36 by zzhu              #+#    #+#             */
/*   Updated: 2025/12/05 20:18:10 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	size;

	if ((size_t)start >= ft_strlen(s))
	{
		size = 0;
		start = ft_strlen(s);
	}
	else if(ft_strlen(s) < len)
		size = ft_strlen(s);
	else
		size = len;
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	ft_bzero(result, size + 1);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}

// int	main(void)
// {
// 	char str[] = "tripouille!";
// 	char *sub;

// 	sub = ft_substr(str, 100, 1);
// 	printf("%s\n", sub);
// 	free(sub);
// }
