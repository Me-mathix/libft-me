/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:32:39 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/11/09 23:10:36 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	int car;

	i = 0;
	car = (char) c;
	while (s[i] != car)
	{
		if (s[i] == '\0')
			return(0);
		i++;
	}
	return((char *)s + i);
}
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main(void)
// {
// 	printf("%s", strchr("", '\0'));
// 	printf("%s", ft_strchr("", '\0'));
		
// }