/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 05:01:31 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/02 21:16:03 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	size_t	i;

	i = 0;
	a = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!a)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		a[i] = s1[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
/*int main(void)
{
	char *a = ft_strdup("");
	char *b = strdup("");
	printf("original:%s\nmyfunction:%s",b,a);
	free(a);
	return 0;
}*/
