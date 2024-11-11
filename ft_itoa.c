/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-guad <yel-guad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:53:29 by yel-guad          #+#    #+#             */
/*   Updated: 2024/11/04 08:37:29 by yel-guad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len(int n)
{
	size_t	l;

	l = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		l++;
	while (n != 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	size_t	l;
	char	*p;

	l = len(n);
	p = (char *)malloc(sizeof(char) * (l + 1));
	if (!p)
		return (NULL);
	p[l] = '\0';
	if (n < 0)
		p[0] = '-';
	else
		n = -n;
	if (n == 0)
		p[0] = '0';
	while (n != 0)
	{
		p[--l] = -(n % 10) + '0';
		n /= 10;
	}
	return (p);
}
