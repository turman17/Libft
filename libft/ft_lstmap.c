/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtryason <vtryason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:25:15 by vtryason          #+#    #+#             */
/*   Updated: 2023/04/15 18:37:50 by vtryason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;

	if (!lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		current = ft_lstnew(f(lst->content));
		if (!current)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, current);
		lst = lst->next;
	}
	return (new_list);
}
