/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:38:43 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/29 20:24:50 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *nptr);

int	spacesignnb(int c)
{
	if (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ')
		return (3);
	if (c == '+' || c == '-')
		return (2);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	idx;
	int	result;
	int	sign;

	sign = 1;
	idx = 0;
	result = 0;
	while (spacesignnb(nptr[idx]) == 3)
		idx++;
	if (spacesignnb(nptr[idx]) == 2)
	{
		if (nptr[idx] == '-' )
			sign = -1;
		idx++;
	}
	while (spacesignnb(nptr[idx]) == 1)
	{
		result = result * 10 + ((nptr[idx] - '0') % 10);
		idx++;
	}
	return (result * sign);
}

// int main(void)
// {
// 	char *str = "  0";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "546:5";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "-4886";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "-4886";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "054854";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "+-54";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "-+48";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "--47";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "++47";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "+47+5";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "-47-5";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "\e475";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "\t\n\r\v\f  469 \n";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "-2147483648";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "2147483647";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "\t\n\r\v\fd469 \n";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "\n\n\n  -46\b9 \n5d6";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// 	str = "";
// 	printf("test: %s, orig: %d, ft: %d\n", str, atoi(str), ft_atoi(str));

// }