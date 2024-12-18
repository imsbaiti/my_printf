/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <imsbaiti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 05:49:46 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/12/17 22:39:52 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns_pf(unsigned int n)
{
	int		count;
	char	num;

	count = 0;
	if (n > 9)
	{
		count = count + ft_putuns_pf(n / 10);
		count = count + ft_putuns_pf(n % 10);
	}
	if (n >= 0 && n <= 9)
	{
		num = n + 48;
		count = count + write(1, &num, 1);
	}
	return (count);
}