/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:38:57 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/11/07 22:31:35 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t				dst_len;
	size_t				i;
	size_t				src_len;

	i = 0;
	src_len = ft_strlen(src);
	if ((size == 0) && (!dst))
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len > size)
		return (src_len + size);
	while (src[i] && (dst_len + i < size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
		return (dst_len + src_len);
}

#include <stdio.h>
#include <string.h>

int main (void)
{
	char bbb[30]; memset(bbb, 0, 30);
	if (ft_strlcat(bbb, "123", 0) == 3 && !strcmp(bbb, ""))
		printf ("ERROR");
	printf ("%zu\n", ft_strlcat(bbb, "123", 0));
	printf ("%d\n", strcmp(bbb, ""));
}