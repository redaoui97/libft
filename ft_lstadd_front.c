/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:59:47 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/01 14:01:17 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (!*lst)
	{
		new->next = NULL;
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

/*int main(void)
{
	t_list *a = ft_lstnew("hello world");
	t_list *lst;

	ft_lstadd_front(&lst, a);
	printf("%s",lst->content);
	return 0;
}*/
