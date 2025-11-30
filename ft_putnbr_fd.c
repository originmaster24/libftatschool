/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:51:05 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/30 12:39:51 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd);

static char	*findstart(char *str)
{
	if (*str != '\0')
		return (str);
	while (*str == '\0')
		str++;
	return (str);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	str[15];
	int		idx;
	int		negative;

	nb = n;
	negative = 0;
	idx = 13;
	ft_memset(str, '\0', 15);
	if (nb < 0)
	{
		nb *= -1;
		negative = 1;
	}
	while (nb > 0)
	{
		str[idx--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (negative)
		str[idx] = '-';
	if (n == 0)
		str[0] = '0';
	ft_putstr_fd(findstart(str), fd);
}

// int main(void)
// {
// 	ft_putnbr_fd(0, 2);
// 	printf("t1\n");
// 	ft_putnbr_fd(5, 1);
// 	printf("t2\n");
// 	ft_putnbr_fd(-5, 2);
// 	printf("t3\n");
// 	ft_putnbr_fd(42, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-57, 1);
// 	printf("\n");
// 	ft_putnbr_fd(164189, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-987441, 2);
// 	printf("\n");
// 	ft_putnbr_fd(2147483647, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-2147483648LL, 2);

// }