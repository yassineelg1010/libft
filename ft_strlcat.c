/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-guad <yel-guad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:58:34 by yel-guad          #+#    #+#             */
/*   Updated: 2024/11/06 09:06:34 by yel-guad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dl;
	size_t	sl;
	size_t	i;
	size_t	j;

	sl = ft_strlen(src);
	if (!dst && dsize == 0)
		return (sl);
	dl = ft_strlen(dst);
	if (dl >= dsize)
		return (dsize + sl);
	i = 0;
	j = dl;
	while (j < dsize - 1 && src[i])
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (dl + sl);
}
