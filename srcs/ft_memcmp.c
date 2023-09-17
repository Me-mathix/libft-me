/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:32:26 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/13 13:36:07 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((*(char*)s1 || *(char*)s2) && (i < n))
	{
		if (*(char*)s1 != *(char*)s2)
		{
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
		}
		i++;
		s1++;
		s2++;
	}
	return (0);
}
