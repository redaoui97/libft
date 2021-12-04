/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:17:22 by rnabil            #+#    #+#             */
/*   Updated: 2021/11/28 13:30:47 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;

	a = (void *)malloc(count * size);
	if (!a)
		return (NULL);
	ft_bzero (a, count * size);
	return (a);
}

/*int main(void)
{
	char *a = ft_calloc(1, 1);
	if (a[3] == '\0')
		printf("yes");
	free(a);
	return 0;
}*/
