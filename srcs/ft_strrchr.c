/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:43:30 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/10/02 11:06:00 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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