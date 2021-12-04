/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:06:30 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/04 15:09:33 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*remspace(const char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	return ((char *)str);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	neg;

	str = remspace(str);
	res = 0;
	if (!*str)
		return (0);
	if (str[0] != '-' && str[0] != '+' && !ft_isdigit(str[0]))
		return (0);
	if (str[0] == '-')
		neg = 1;
	else
		neg = 0;
	if (!ft_isdigit(str[0]))
		i = 1;
	else
		i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - 48);
	if (neg)
		return (res * -1);
	else
		return (res);
}

/*int main()
{
	printf("t:%d\nv:%d\nf:%d\nr:%d\nn:%d\nspc:%d\n",'\t','\v','\f','\r','\n',' ');
	printf("%d",ft_atoi("    +521"));
}*/
