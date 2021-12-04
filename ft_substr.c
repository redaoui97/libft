/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:32:00 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/04 20:29:43 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ret_right_size(char const *s, unsigned int start, size_t len)
{
	size_t size;

	if (start + len < ft_strlen(s))
		size = len + 1;
	else
		size = ft_strlen(s) - start + 1;	
	return (size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	j;
	size_t size;

	if (!s)
		return (NULL);

	if (start >= ft_strlen(s))
	{
		a = malloc(sizeof(char) * 1);
		a[0] = 0;
		return (a);
	}
	
	size = ret_right_size(s, start, len);

	a = (char *)malloc(sizeof(char) * (size));
	if (!a)
		return (NULL);
	i = 0;
	j = start;
	while (i < size - 1 && s[j])
		a[i++] = s[j++];
	a[i] = '\0';
	return (a);
}

/*#include <stdio.h>
int main(void)
{
	char * a = ft_substr("tripouille", 0, 42000);
	printf("1:%s",a);
	free(a);
	return 0;
}*/
