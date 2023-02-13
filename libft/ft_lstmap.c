/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:41:03 by kquetat-          #+#    #+#             */
/*   Updated: 2022/12/01 13:37:32 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tab;

	tab = NULL;
	if (!f || !del || !lst)
		return (NULL);
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&tab, del);
			return (NULL);
		}
		ft_lstadd_back(&tab, tmp);
		lst = lst->next;
	}
	tmp->next = NULL;
	return (tab);
}
