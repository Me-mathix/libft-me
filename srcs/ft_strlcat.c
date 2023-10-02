/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieu <mathieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:38:57 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/30 11:30:30 by mathieu          ###   ########.fr       */
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