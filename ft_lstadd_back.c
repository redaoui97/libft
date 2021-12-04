/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:52:22 by rnabil            #+#    #+#             */
/*   Updated: 2021/11/30 14:05:36 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		new->next = NULL;
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
	new->next = NULL;
}

/*int main(void)
{
	t_list *a = ft_lstnew("hello 1");
	t_list *b = ft_lstnew("hello 2");
	t_list *c = ft_lstnew("hello 3");
	t_list *lst;
	ft_lstadd_front(&lst, a);
	ft_lstadd_front(&lst, b);
	ft_lstadd_back(&lst, c);
	printf("%s",ft_lstlast(lst)->content);
	return 0;
}*/
