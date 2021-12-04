/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:40:33 by rnabil            #+#    #+#             */
/*   Updated: 2021/11/30 13:52:10 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr)
	{
		if (ptr->next)
			ptr = ptr->next;
		else
			break ;
	}
	return (ptr);
}

/*int main(void)
{
	t_list *a = ft_lstnew("hello 1");
	t_list *b = ft_lstnew("hello 2");
	t_list *c = ft_lstnew("hello 3");
	t_list *d;
	t_list *lst;
	ft_lstadd_front(&lst, a);
	ft_lstadd_front(&lst, b);
	ft_lstadd_front(&lst, c);
	d = ft_lstlast(lst);
	printf("%s",d->content);
	return 0;
}*/
