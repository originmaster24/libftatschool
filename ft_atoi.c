/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:38:43 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/28 22:04:46 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *nptr);

static int	expten(int i)
{
	int	result;

	result = 1;
	while (i > 1)
	{
		result *= 10;
		i--;
	}
	return (result);
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	counter;
	int	pos;

	pos = 1;
	result = 0;
	counter = ft_strlen(nptr) - 1;
	while (counter >= 0)
	{
		result += (nptr[counter] - '0') * expten(pos);
		counter--;
		pos++;
	}
	return (result);
}

// int main(void)
// {
// 	char *str = "123456";

// 	printf("orig: %d, ft: %d\n", atoi(str), ft_atoi(str));

// 	str = "0";
// 	printf("orig: %d, ft: %d\n", atoi(str), ft_atoi(str));

// 	str = "1";
// 	printf("orig: %d, ft: %d\n", atoi(str), ft_atoi(str));

// 	str = "5";
// 	printf("orig: %d, ft: %d\n", atoi(str), ft_atoi(str));

// 	str = "12";
// 	printf("orig: %d, ft: %d\n", atoi(str), ft_atoi(str));
// }