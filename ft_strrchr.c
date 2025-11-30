/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:01:52 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/30 11:58:48 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int	endi;

	endi = ft_strlen(s);
	while (endi >= 0)
	{
		if (s[endi] == c)
		{
			return ((char *)(s + endi));
		}
		endi--;
	}
	return (NULL);
}

// int main(void)
// {
// 	char str[] = "hello world!";
// 	char c = '\0';

// 	for (; c < 126; c++)
// 		printf("letter: %c ascii: %d, ft: %p, original: %p\n",
// 		c, c, ft_strrchr(str, c), strrchr(str, c));

// 	}
