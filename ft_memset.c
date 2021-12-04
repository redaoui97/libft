/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 04:59:21 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/03 17:51:16 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)((b + i)) = c;
		i++;
	}
	return (b);
}
/*int main(void)
{
	char *a = ft_strdup("hello");
	ft_memset(a,'i',5);
	printf("%s",a);
		free (a);
		return 0;
}*/
