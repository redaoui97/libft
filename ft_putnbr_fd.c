/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:59:19 by rnabil            #+#    #+#             */
/*   Updated: 2021/11/29 12:03:07 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	a;

	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		a = n * -1;
	}
	else
		a = n;
	if (a >= 10)
		ft_putnbr_fd(a / 10, fd);
	ft_putchar_fd(a % 10 + '0', fd);
}

/*int main(void)
{
	ft_putnbr_fd(0, 1);
	return 0;
}*/
