/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:05:17 by rnabil            #+#    #+#             */
/*   Updated: 2021/11/29 12:22:55 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*(s + i) == c)
		{
			a = (char *)(s + i);
			return (a);
		}
		i--;
	}
	return (NULL);
}

/*int main(void)
{
	printf("%s",ft_strrchr("hello world",'l'));
	return 0;
}*/
