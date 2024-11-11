/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-guad <yel-guad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:32:58 by yel-guad          #+#    #+#             */
/*   Updated: 2024/11/06 15:54:33 by yel-guad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		b;
	const unsigned char	*str;

	if (!s && n == 0)
		return (NULL);
	b = (unsigned char) c;
	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == b)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
