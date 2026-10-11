/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 21:47:05 by wkuay             #+#    #+#             */
/*   Updated: 2026/10/10 22:38:49 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_content;
	t_list	*new_lst;
	void	*content;

	if (lst == NULL || f == NULL)
		return (NULL);
	current = lst;
	new_lst = NULL;
	while (current != NULL)
	{
		content = f(current->content);
		new_content = ft_lstnew(content);
		if (new_content == NULL)
		{
			if (del != NULL)
				del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_content);
		current = current->next;
	}
	return (new_lst);
}
