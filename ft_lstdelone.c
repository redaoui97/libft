/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:05:46 by rnabil            #+#    #+#             */
/*   Updated: 2021/11/30 18:13:58 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*int main(void)
{
	char	*word = ft_strdup("word 1");
	char	*word2 = ft_strdup("word 2");
	t_list	*a = ft_lstnew(word);
	t_list	*b = ft_lstnew(word2);
	t_list	*lst;
	ft_lstadd_front(&lst, b);
	ft_lstadd_front(&lst, a);
	ft_lstdelone(lst, free);
	printf("First: %p+%p\nSecond: %s",lst,lst->next,lst->next->content);
	return 0;
}*/
