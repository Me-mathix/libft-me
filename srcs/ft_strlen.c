/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:17:31 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/12 13:33:06 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

// int	main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%d\n",ft_strlen(argv[1]));
// 	printf("%ld\n",strlen(argv[1]));

// 	return (0);
// }
