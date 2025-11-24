/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:35:55 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/24 20:46:48 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isascii(int c);

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}

// int main(void)
// {
// 	for(int i = 0; i < 255; i++)
// 		printf("i: %d, ctype: %d, ft: %d\n", i, isascii(i), ft_isascii(i));
// }
