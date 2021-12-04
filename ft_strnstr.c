/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:12:49 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/04 14:10:17 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (len - i && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[0])
		{
			if (i + ft_strlen(needle) > len)
				return (NULL);
			while (j < ft_strlen (needle))
			{
				if (haystack[i + j] != needle[j])
					break ;
				j++;
			}
			if (j == ft_strlen(needle))
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	printf("%s",ft_strnstr("hello world","hello", 10));
}*/
