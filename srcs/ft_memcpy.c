/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:10:59 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/12 14:36:20 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return('dest')
	while (i < n)
	{
		*(char *)dest = *(char *)src;
		i++;
		dest++;
		src++;
	}
	return (dest - i);
}

// int main (int argc, char **argv)
// {
// 	(void) argc;
// 	char dest[50];
// 	char desti[50];
//    strcpy(dest,"Heloooo!!");
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memcpy(dest, argv[1], strlen(argv[1]));
//    printf("After memcpy dest = %s\n", dest);
//    strcpy(desti,"Heloooo!!");
//    printf("Before memcpy dest = %s\n", desti);
//    memcpy(desti, argv[1], strlen(argv[1]));
//    printf("After memcpy dest = %s\n", desti);
//    return(0);
// }
