/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:30:32 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/10/02 11:06:00 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "../includes/libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)str = c;
		i++;
		str++;
	}
	return (str - i);
}

// int main (void) 
// {
//    char ste[50];
//    char str[50];
//    strcpy(ste,"This is string.h library function");
//    puts(ste);
//    ft_memset(ste,'e',42);
//    puts(ste);
//    strcpy(str,"This is string.h library function");
//    puts(str);
//    memset(str,'e',42);
//    puts(str);
//    return(0);
// }
