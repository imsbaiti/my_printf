/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <imsbaiti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 05:38:54 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/12/17 22:37:42 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_printptrpf(unsigned long n)
{
	int		count;
	char	num;
	
	count = 0;
	if (n >= 16)
	{
		count = count + ft_printptrpf(n / 16); // Recurse on the quotient (higher digits)
		count = count + ft_printptrpf(n % 16);// Recurse on the remainder (lower digits)
	}
	else
	{
		if (n <= 9)
			num = n + 48; // Convert 0-9 to '0'-'9' (ASCII codes)
		else
			num = n - 10 + 97; // Convert 10-15 to 'a'-'f' (ASCII codes)
		count = count + write(1, &num, 1);// Write the character to stdout 
	}
	return (count);
	
}
int	ft_putptr_pf(void *ptr)
{
	int				len;
	unsigned long	n;

	len = 2;  // For the "0x" prefix
	n = (unsigned long)ptr;// Convert the pointer to an unsigned long (necessary for printing)
	write (1, "0x", 2); // Print the "0x" prefix
	return (ft_printptrpf(n) + len); // Print the hexadecimal digits and return total length add 2 for "0x"
}
// #include <stdio.h>
// int main()
// {
// 	int a = 42;
	
// 	ft_putptr_pf(&a);
// }