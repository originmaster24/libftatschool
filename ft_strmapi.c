/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:15:36 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/29 16:26:08 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*result;

	result = malloc(800 * sizeof(char));
	if (result)
		return (NULL);
	index = 0;
	while (index <= 800)
		result[index++] = '\0';
	index = 0;
	while (s[index])
	{
		((char *)s)[index] = f(index, s[index]);
		index++;
	}
	return (result);
}
