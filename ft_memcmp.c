/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-guad <yel-guad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:28:15 by yel-guad          #+#    #+#             */
/*   Updated: 2024/11/05 09:51:12 by yel-guad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a1;
	const unsigned char	*a2;
	size_t				i;

	a1 = (const unsigned char *) s1;
	a2 = (const unsigned char *) s2;
	i = 0;
	while (i < n && a1[i] == a2[i])
		i++;
	if (i == n)
		return (0);
	return (a1[i] - a2[i]);
}
