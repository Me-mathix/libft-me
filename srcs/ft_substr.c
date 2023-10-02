/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieu <mathieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:13:49 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/30 12:24:56 by mathieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *sub;

	i = 0;
	if (!s)
		return ("");
	if (start >= (unsigned int)ft_strlen(s))
	{
		sub = malloc(2);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	sub = malloc((sizeof (char)) * len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	printf("%s", ft_substr("Lorem ipsum dolores et ta soeur", 7 , 10));
// 	return(0);
// }