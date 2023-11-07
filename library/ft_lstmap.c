/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:48:06 by vafleith          #+#    #+#             */
/*   Updated: 2023/11/07 17:09:50 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *start;

	new_lst = ft_lstnew(lst->content);
	if (new_lst == NULL)
		return NULL;
	start = new_lst;

	while(lst->next)
	{
		(*f)(new_lst->content);
		lst = lst->next;
		new_lst->next = ft_lstnew(lst->next->content);
		
		if (new_lst == NULL)
		{
			ft_lstclear(&start, (del));
			return NULL;
		}
	}
	return start;
}
