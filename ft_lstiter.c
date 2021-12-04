/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:11:48 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/01 22:18:41 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (!lst || !f)
		return ;
	ptr = lst;
	while (ptr != NULL)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
}

/*int main(void)
{
	char *word = ft_strdup("hello a");
	char *word2 = ft_strdup("hello b");
	char *word3 = ft_strdup("hello c");
	t_list	*a = ft_lstnew(word);
	t_list	*b = ft_lstnew(word2);
	t_list	*c = ft_lstnew(word3);
	t_list	*lst;
	lst = NULL;
	ft_lstadd_front(&lst, c);
	ft_lstadd_front(&lst, b);
	ft_lstadd_front(&lst, a);
	ft_lstiter(lst, f);
	printf("First: %s\nSecond: %s\nThird: %s",lst->content,
	lst->next->content,lst->next->next->content);
	return 0;
}*/
