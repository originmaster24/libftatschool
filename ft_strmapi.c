/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:15:36 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/30 14:10:26 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*result;

	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_memset(result, '\0', ft_strlen(s) + 1);
	index = 0;
	while ((size_t)index < ft_strlen(s))
	{
		result[index] = f(index, s[index]);
		index++;
	}
	return (result);
}
