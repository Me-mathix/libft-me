/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:31:39 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/10/02 11:06:00 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include <unistd.h>
// #include <string.h>
#include "../includes/libft.h"

// void *ft_memmove(void *dest, const void *src, size_t n)
// {
// 	unsigned long	i;
// 	unsigned long	j;
// 	char 	dump[n];

// 	i = 0;
// 	j = 0;
// 	if (!dest && !src)
// 		return(dest);
// 	while (j < n)
// 	{
// 		dump[j] = *(char *)src;
// 		j++;
// 		src++;
// 	}
// 	while (i < n)
// 	{
// 			*(char *)dest = dump[i];
// 			i++;
// 			dest++;
// 	}
// 	return (dest - i);
// }
// #include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *dest = dst;
	const char *srce = src;
	if (!dest && !src)
		return(dest);
	if (srce < dest) {
		srce += n;
		dest += n;
		while (n-- > 0)
			*--dest = *--srce;
	} else
		ft_memcpy(dst, src, n);
	return dest;
}


// int main (void)
// {
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	*dest;

// 	dest = src + 1;

// 		if (dest != memmove(dest, "con\0sec\0\0te\0tur", 10))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
//    return(0);
// }