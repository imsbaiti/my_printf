/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <imsbaiti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 04:31:58 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/12/17 23:50:55 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex_pf(unsigned int n, const char f)
{
    int     count;
    char    num;

    count = 0;
    if (n >= 16)
    {
        count = count + ft_puthex_pf((n / 16), f);
        count = count + ft_puthex_pf((n % 16), f);
    }
    else
    {
        if (n <= 9)
            num = n + 48;
        else
        {
            if(f == 'x')
                num = n - 10 + 97;
            else if (f == 'X')
                num = n - 10 + 65;
        }
        count = count + write(1, &num, 1);
    }
    return (count);    
}
// #include <stdio.h>
// int main()
// {
//     ft_printf("%x\n", 777);
//     printf("%x", 777);
// }