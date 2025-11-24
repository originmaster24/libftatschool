/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:20:07 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/24 20:04:08 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>


int	ft_isdigit(int c);

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('a'));
// 	printf("%d\n", ft_isdigit('1'));
// 	printf("%d\n", ft_isdigit('9'));
// 	printf("%d\n", ft_isdigit('0'));
// 	printf("%d\n", ft_isdigit('A'));
// 	printf("%d\n", ft_isdigit('z'));
// 	printf("%d\n", ft_isdigit('Z'));
// 	printf("%d\n", ft_isdigit('!'));
// 	printf("%d\n", ft_isdigit(10));
// 	printf("-----------\n");
// 	printf("%d\n", isdigit('a'));
// 	printf("%d\n", isdigit('1'));
// 	printf("%d\n", isdigit('9'));
// 	printf("%d\n", isdigit('0'));
// 	printf("%d\n", isdigit('A'));
// 	printf("%d\n", isdigit('z'));
// 	printf("%d\n", isdigit('Z'));
// 	printf("%d\n", isdigit('!'));
// 	printf("%d\n", isdigit(10));
	
// }
