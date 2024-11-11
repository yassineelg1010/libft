/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-guad <yel-guad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:06:38 by yel-guad          #+#    #+#             */
/*   Updated: 2024/11/04 16:16:33 by yel-guad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nl;

	if (needle[0] == '\0')
		return ((char *) haystack);
	i = 0;
	nl = ft_strlen(needle);
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] && i + j < len && haystack[i + j] == needle[j])
		{
			j++;
			if (j == nl)
				return ((char *) haystack + i);
		}
		i++;
	}
	return (NULL);
}
