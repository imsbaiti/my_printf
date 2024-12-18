/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <imsbaiti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 04:45:14 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/12/17 22:59:56 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	int count;
	
	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		n *= -1; // Make n positive
		count = count + write(1, "-",1);// Write the minus sign
	}
	if (n > 9)
	{
		count = count + ft_putnbr_pf(n / 10);
		count = count + ft_putnbr_pf(n % 10);
	}
	if (n >= 0 && n <= 9)
	{
		n = n + '0';// Convert to character
		count = count + write(1,&n, 1);// Print the digit
	}
	return (count);
}
