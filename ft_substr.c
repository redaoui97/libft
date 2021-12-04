/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:32:00 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/03 10:16:32 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		a = malloc(sizeof(char) * 1);
		a[0] = 0;
		return (a);
	}
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	i = 0;
	j = start;
	while (i < len)
		a[i++] = s[j++];
	a[i] = '\0';
	return (a);
}

/*int main(void)
{
	char *a = ft_substrs("hello", 0, 0);
	printf("1:%s",a);
	free(a);
	return 0;
}*/
