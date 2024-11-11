/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-guad <yel-guad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:22:16 by yel-guad          #+#    #+#             */
/*   Updated: 2024/11/01 14:15:58 by yel-guad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		d = (unsigned char *)dst;
		s = (unsigned char *)src;
		while (len > 0)
		{
			--len;
			*(d + len) = *(s + len);
		}
	}
	return (dst);
}
