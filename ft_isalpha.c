/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 02:23:10 by rnabil            #+#    #+#             */
/*   Updated: 2021/11/28 04:47:24 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_upper(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}

static	int	is_lower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if (is_lower(c) || is_upper(c))
		return (1);
	else
		return (0);
}
/*int main(void)
{
	printf("%d",ft_isalpha('\0'));
	return 0;
}*/
