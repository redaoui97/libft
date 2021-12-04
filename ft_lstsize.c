/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:23:17 by rnabil            #+#    #+#             */
/*   Updated: 2021/11/30 13:39:47 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		count;

	ptr = lst;
	count = 0;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}

/*int main(void)
{
	t_list	*a = ft_lstnew("hello 1");
	t_list	*b = ft_lstnew("hello 2");
	t_list	*c = ft_lstnew("hello 3");
	t_list	*lst;
	t_list	*lst2 = NULL;
	ft_lstadd_front(&lst, a);
	ft_lstadd_front(&lst, b);
	ft_lstadd_front(&lst, c);
	printf("%d",ft_lstsize(lst));
	return 0;
}*/
