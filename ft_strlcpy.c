/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 08:41:46 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/03 18:15:57 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int main(void)
{
	char *a = ft_strdup("hello");
	char *b = ft_strdup("world");
	char *c = ft_strdup("world");
	size_t x = 10;
	printf("%s %zu %s\n%s %zu %s",b,ft_strlcpy(b,a,x),b,c,strlcpy(c,a,x),c);
	free(a);
	free(b);	
	return 0;
}*/
