/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <imsbaiti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 04:25:27 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/12/17 23:45:03 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>  // Pour utiliser va_list, va_start, va_arg, va_end
# include <unistd.h>  // Pour write()

// Déclaration des fonctions auxiliaires utilisées dans ft_printf
int ft_putchar_pf(char c);        // Fonction pour afficher un caractère
int ft_putstr_pf(char *str);      // Fonction pour afficher une chaîne
int ft_putnbr_pf(int n);          // Fonction pour afficher un entier
int ft_putuns_pf(unsigned int n); // Fonction pour afficher un entier non signé
int ft_putptr_pf(void *ptr);      // Fonction pour afficher un pointeur
int ft_puthex_pf(unsigned int n, const char f);// Fonction pour afficher un nombre hexadécimal
int	ft_printf(const char *str, ...);
#endif
