/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieu <mathieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:32:39 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/30 11:14:41 by mathieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if(s[i] == '\0')
		return(0);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
		if (s[i] == c)
			return ((char *)s + i);
	}
	return(0);
}
