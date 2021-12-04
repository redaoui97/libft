/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 05:12:37 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/03 18:07:44 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset (s, 0, n);
}

/*int main(void)
{
	char *a = ft_strdup("hello");
	ft_bzero(a,4);
	printf("%s",a);
	free(a);
	return 0;
}*/
