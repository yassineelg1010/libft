/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-guad <yel-guad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:21:06 by yel-guad          #+#    #+#             */
/*   Updated: 2024/11/08 10:13:19 by yel-guad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	while (s1[i])
	{
		k = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				k = 1;
			j++;
		}
		if (!k)
			break ;
		i++;
	}
	return (i);
}

static size_t	find_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		k;

	i = ft_strlen(s1);
	while (i > 0)
	{
		i--;
		k = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				k = 1;
			j++;
		}
		if (!k)
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;
	int		i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = find_start(s1, set);
	end = find_end(s1, set);
	if (!s1[0] || start > end)
		return (ft_strdup(""));
	res = malloc(sizeof(char) * (end - start + 2));
	if (!res)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
