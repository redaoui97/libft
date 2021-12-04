/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:15:04 by rnabil            #+#    #+#             */
/*   Updated: 2021/11/30 20:22:00 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
}

/*int main(void)
{
	char	*word = ft_strdup("word a");
	char	*word2 = ft_strdup("word b");
	char 	*word3 = ft_strdup("word c");
	t_list	*a = ft_lstnew(word);
	t_list	*b = ft_lstnew(word2);
	t_list	*c = ft_lstnew(word3);
	t_list	*lst;
	ft_lstadd_front(&lst, c);
	ft_lstadd_front(&lst, b);
	ft_lstadd_front(&lst, a);
	printf("First: %s\nSecond: %s\nThird: %s",
	lst->content,lst->next->content,lst->next->next->content);
	ft_lstclear(&lst, free);
	printf("First: %s\nSecond: %s\nThird: %s",
	lst->content,lst->next->content,lst->next->next->content);
	return 0;
}*/
