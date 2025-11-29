/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:12:58 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/29 16:13:11 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

char		*ft_itoa(int n);
static int	sizeofn(int n);
static char	*conversion(long nb, char *result, int size, int idx);

static int	sizeofn(int n)
{
	int		counter;
	long	nb;

	nb = n;
	counter = 1;
	if (nb < 0)
	{
		counter++;
		nb *= -1;
	}
	while (nb / 10 > 0)
	{
		nb /= 10;
		counter++;
	}
	return (counter);
}

static char	*conversion(long nb, char *result, int size, int idx)
{
	while (size >= idx)
	{
		result[size] = nb % 10 + '0';
		nb /= 10;
		size--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*result;
	int		idx;
	long	nb;

	nb = n;
	idx = 0;
	size = sizeofn(n);
	result = malloc(sizeof(char) * size + 1);
	result[size] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		result[idx++] = '-';
	}
	return (conversion(nb, result, size - 1, idx));
}

// int main(void)
// {
// 	int n = -123;
// 	char *str =	ft_itoa(n);
// 	printf("n: %d, funct: %s\n",n , str);

// 	n = 0;
// 	str =	ft_itoa(n);
// 	printf("n: %d, funct: %s\n",n , str);

// 	n = 1;
// 	str =	ft_itoa(n);
// 	printf("n: %d, funct: %s\n",n , str);

// 	n = -1;
// 	str =	ft_itoa(n);
// 	printf("n: %d, funct: %s\n",n , str);

// 	n = 123;
// 	str =	ft_itoa(n);
// 	printf("n: %d, funct: %s\n",n , str);

// 	n = INT_MAX;
// 	str =	ft_itoa(n);
// 	printf("n: %d, funct: %s\n",n , str);

// 	n = INT_MIN;
// 	str =	ft_itoa(n);
// 	printf("n: %d, funct: %s\n",n , str);

// }