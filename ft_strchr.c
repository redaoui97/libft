/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:43:47 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/03 18:18:35 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;

	a = (char *)s;
	while (*a)
	{
		if (*a == c)
			return (a);
		a++;
	}
	if (c == '\0')
		return (a);
	return (NULL);
}

/*int main(void)
{
	char *a = ft_strdup("hello world");
	char b  = ' ';
	printf("%s\n%s",ft_strchr(a, b), strchr(a,b));
	return 0;
}*/
