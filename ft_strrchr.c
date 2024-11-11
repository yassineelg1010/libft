/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-guad <yel-guad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:55:50 by yel-guad          #+#    #+#             */
/*   Updated: 2024/11/04 16:12:28 by yel-guad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	b;

	b = (char) c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == b)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}
