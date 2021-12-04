/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:04:50 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/04 14:45:41 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	exists(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	size_t	i;
	size_t	first;
	size_t	last;

	if (!s1)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	first = 0;
	i = 0;
	while (s1[first] && exists(s1[first], set))
		first++;
	last = ft_strlen(s1) - 1;
	while (last > first && exists(s1[last], set))
		last--;
	a = (char *)malloc((last - first + 2) * sizeof(char));
	if (!a)
		return (NULL);
	while (first <= last)
		a[i++] = s1[first++];
	a[i] = 0;
	return (a);
}

/*int main(void)
{
	char *a = ft_strtrim("hello world", "hedo");
	printf("%s",a);
	free(a);
	return 0;
}*/
