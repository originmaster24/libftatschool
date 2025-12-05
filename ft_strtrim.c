/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:21:11 by zzhu              #+#    #+#             */
/*   Updated: 2025/12/05 21:10:03 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set);
static int	setmatch(char letter, char *set);
static int	findstart(char *s1, char *set);
static int	findend(char *s1, char *set);

static int	setmatch(char letter, char *set)
{
	int	setdx;

	setdx = 0;
	while (set[setdx])
	{
		if (letter == set[setdx])
			return (1);
		setdx++;
	}
	return (0);
}

static int	findstart(char *s1, char *set)
{
	int	s1dx;

	s1dx = 0;
	while (s1[s1dx] != '\0')
	{
		if (setmatch(s1[s1dx], set))
		{
			s1dx++;
			continue ;
		}
		else
			break ;
	}
	return (s1dx);
}

static int	findend(char *s1, char *set)
{
	int	s1dx;

	s1dx = ft_strlen(s1) - 1;
	while (s1dx >= 0)
	{
		if (s1dx == 0 && setmatch(s1[s1dx], set))
			return (ft_strlen(s1));
		if (setmatch(s1[s1dx], set))
		{
			s1dx--;
			continue ;
		}
		else
			break ;
	}
	return (s1dx + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		matchstart;
	int		matchend;
	char	*result;

	matchstart = findstart((char *)s1, (char *)set);
	matchend = findend((char *)s1, (char *)set);
	result = malloc((matchend - matchstart + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (matchend - matchstart >= 0)
		ft_strlcpy(result, s1 + matchstart, matchend - matchstart + 1);
	return (result);
}

// int main(void)
// {
// 	//char str[] = "   2  9asd   ";
// 	//char set[] = " 213123   a1!1 ";
// 	char *trimmed;

// 	trimmed = ft_strtrim("   xxxtripouille", " x");
// 	printf("trimmed: %s\n", trimmed);
// }