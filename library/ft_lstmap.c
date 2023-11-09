/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:48:06 by vafleith          #+#    #+#             */
/*   Updated: 2023/11/08 09:31:45 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*start;

	new_lst = ft_lstnew(lst->content);
	if (new_lst == NULL)
		return (NULL);
	start = new_lst;
	while (lst->next)
	{
		(*f)(new_lst->content);
		lst = lst->next;
		new_lst->next = ft_lstnew(lst->content);
		if (new_lst->next == NULL)
		{
			ft_lstclear(&start, (del));
			return (NULL);
		}
		new_lst = new_lst->next;
	}
	return (start);
}
