#include "ft_printf.h"

int	ft_putstr_pf(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
		ft_putchar_pf(str[i++]);
		return (i);
}