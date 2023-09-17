/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:42:19 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/12 13:32:57 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return (1024);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n",ft_isalpha(42));
// 	printf("%d\n",isalpha(42));

// 	return (0);
// }
