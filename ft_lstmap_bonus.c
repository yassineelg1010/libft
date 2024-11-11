/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-guad <yel-guad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:44:38 by yel-guad          #+#    #+#             */
/*   Updated: 2024/11/11 08:41:42 by yel-guad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*freenew(t_list *new, void (*del)(void *))
{
	ft_lstclear(&new, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*nd;
	void	*tc;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		tc = f(lst->content);
		if (!tc)
			return (freenew(new, del));
		nd = ft_lstnew(tc);
		if (!nd)
		{
			del(tc);
			return (freenew(new, del));
		}
		ft_lstadd_back(&new, nd);
		lst = lst->next;
	}
	return (new);
}
