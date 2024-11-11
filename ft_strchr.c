/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-guad <yel-guad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:47:18 by yel-guad          #+#    #+#             */
/*   Updated: 2024/10/31 18:12:45 by yel-guad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			b;

	b = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == b)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == b)
		return ((char *) &s[i]);
	return (NULL);
}
