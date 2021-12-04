/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 05:57:31 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/03 11:14:19 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == src || !len)
		return (dst);
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	else
	{
		while (len--)
		{
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
		}
	}
	return (dst);
}
/*int main(void)
{
	char *a = ft_strdup("hello");
	char *b = (char *)malloc (sizeof(char) * 6);
	size_t x = 2;
	printf("%s\n%s",ft_memmove(a, a+1, x),memmove(c, c+1,x));
	free(a);
	free(b);
	return 0;
}*/
