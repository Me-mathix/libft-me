/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieu <mathieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:38:32 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/30 11:39:03 by mathieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stddef.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] == s2[0])
		{
			while (s1[i + j] == s2[j] && s2[j])
			{
				j++;
			}
			if (s2[j] == '\0' && i + j - 1 < n)
				return ((char *)s1 + i);
		}
		j = 0;
	i++;
	}
	return (0);
}
