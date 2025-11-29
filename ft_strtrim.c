/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:21:11 by zzhu              #+#    #+#             */
/*   Updated: 2025/11/29 13:28:11 by zzhu             ###   ########.fr       */
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
	printf("s1dx: %d\n", s1dx);
	while (s1dx > 0)
	{
		if (setmatch(s1[s1dx], set))
		{
			s1dx--;
			continue ;
		}
		else
			break ;
	}
	return (s1dx);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		matchstart;
	int		matchend;
	char	*result;

	matchstart = findstart((char *)s1, (char *)set);
	matchend = findend((char *)s1, (char *)set);
	result = malloc((matchend - matchstart + 2) * sizeof(char));
	ft_strlcpy(result, s1 + matchstart, matchend - matchstart + 2);
	printf("start: %d, end: %d\n", matchstart, matchend);
	return (result);
}

// int main(void)
// {
// 	char str[] = "12";
// 	char set[] = "123789!";
// 	char *trimmed;

// 	trimmed = ft_strtrim(str, set);
// 	printf("trimmed: %s\n", trimmed);
// }