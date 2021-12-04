/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 08:49:38 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/04 14:10:01 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlcats(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	return_value;

	i = ft_strlen(dst);
	j = 0;
	return_value = 0;
	if (dstsize)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	else
		return (ft_strlen(src));
	if (dstsize < ft_strlen(dst))
		return(ft_strlen(src) + dstsize);
	else
		return(ft_strlen(src) + ft_strlen(dst));
	return (return_value);
}
*/
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	return_value;

	if (!dstsize)
		return (ft_strlen(src));
	if (dstsize < ft_strlen(dest))
		return_value = (ft_strlen(src) + dstsize);
	else
		return_value = (ft_strlen(src) + ft_strlen(dest));
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && i + 1 < dstsize)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (return_value);
}

/*int main(void)
{
	char *a = ft_strdup("hello");
	char *b = (char *)malloc(sizeof(char) * 20);
	b = ft_memcpy(b, "konnichiwa",7);
	char *c = (char *)malloc(sizeof(char) * 20);
	c = ft_memcpy(c, "konnichiwa",7);
	size_t x = 6;
	printf("%s %zu %s\n%s %zu %s",b,ft_strlcat(b,a,x),b,c,strlcat(c,a,x),c);
	free(a);
	free(b);
	free(c);
	return 0;
}*/
