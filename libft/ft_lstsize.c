/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: wkuay <wkuay@student.42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2026/10/04 17:55:55 by wkuay	       #+#    #+#	      */
/*   Updated: 2026/10/10 16:14:34 by wkuay            ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*current;
	unsigned int	count;

	current = lst;
	count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
