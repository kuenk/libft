/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:46:26 by kuenk             #+#    #+#             */
/*   Updated: 2025/10/17 18:51:14 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	aux;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = n * -1;
			write (fd, "-", 1);
		}
		if (n < 10)
		{
			aux = n + '0';
			write (fd, &aux, 1);
		}
		else
		{
			ft_putnbr_fd((n / 10), fd);
			aux = n % 10 + '0';
			write(fd, &aux, 1);
		}
	}
}
