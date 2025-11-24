/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:16:29 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/24 20:28:09 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c);

int	ft_isalnum(int c)
{
	if(ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
int main(void)
{
	printf("%d\n",ft_isalnum('!'));
	printf("%d\n",ft_isalnum('2'));
	printf("%d\n",ft_isalnum('a'));

	printf("--------------------\n")
	printf("%d\n",isalnum('!'));
	printf("%d\n",isalnum('2'));
	printf("%d\n",isalnum('a'));
\}