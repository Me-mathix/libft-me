/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:00:13 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/12 13:32:52 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)s = '\0';
		i++;
		s++;
	}
}

// int main (void) 
// {
//    char ste[50];
//    char str[50];
//    strcpy(ste,"This is string.h library function");
//    puts(ste);
//    ft_bzero(ste, 2);
//    puts(ste);
//    strcpy(str,"This is string.h library function");
//    puts(str);
//    bzero(str, 6);
//    puts(str);
//    return(0);
// }
