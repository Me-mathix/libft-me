/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieu <mathieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:43:30 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/30 11:15:17 by mathieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	int sync;

	i = 0;
	sync = 0;
	if(s[i] == '\0')
		return(0);
	while (s[i])
	{
		if (s[i] == c)
			sync = i;
		i++;
		if (s[i] == c)
			sync = i;
	}
	if (sync > 0)
		return ((char *)s + sync);
	if ((sync == 0) && (s[0] == c))
		return((char *)s);
	return (0);
}