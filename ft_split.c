/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:28:40 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/29 15:20:53 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_split(char const *s, char c);
static int	split_counter(char const *s, char c);
static int	ft_strchridx(const char *s, int start, char c);

static int	split_counter(char const *s, char c)
{
	int	resultcounter;
	int	parseidx;

	resultcounter = 2;
	parseidx = -1;
	while (s[++parseidx])
		if (s[parseidx] == c)
			resultcounter++;
	return (resultcounter);
}

static int	ft_strchridx(const char *s, int start, char c)
{
	int	idx;

	idx = start;
	while (s[idx])
	{
		if (s[idx] == c)
			return (idx);
		idx++;
	}
	return (idx);
}

//atleast splitcount - 1 writes
char	**ft_split(char const *s, char c)
{
	char	**res;
	int		splitcount;
	int		subc;
	int		subs;

	subs = 0;
	subc = 0;
	splitcount = split_counter(s, c);
	res = malloc(sizeof(char *) * splitcount);
	res[splitcount - 1] = NULL;
	while (subc < splitcount - 1)
	{
		res[subc] = malloc(
				(ft_strchridx(s, subs, c) - subs + 1) * sizeof(char));
		ft_strlcpy(res[subc], s + subs, ft_strchridx(s, subs, c) - subs + 1);
		subs = ft_strchridx(s, subs, c) + 1;
		subc++;
	}
	return (res);
}

// int main(void)
// {
// 	setbuf(stdout, NULL);
// 	char str[] = "hello world and hello planet!";
// 	char delimiter = ' ';
// 	char **result;

// 	result = ft_split(str, delimiter);
// 	for(int i = 0; result[i]; i++)
// 		printf("i: %d, res: '%s'\n", i, result[i]);
// }