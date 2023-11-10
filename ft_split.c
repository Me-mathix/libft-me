/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:35:25 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/11/10 21:27:47 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	countchar(const char *s, int i, char c)
{
	int	count;

	count = 0;
	while (i-- > 0 && s[i] != c)
		count++;
	return (count);
}

char	*ft_strndup(const char *s, int from, int to)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc((sizeof (char)) * (to + 1));
	if (!dup)
		return (NULL);
	while (to)
	{
		dup[to - 1] = s[from - i];
		i++;
		to--;
	}
	dup[i] = '\0';
	return (dup);
}

static void	ft_free(char **strs, int i)
{
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		num_word;
	char	**splited;

	if (!s)
		return (NULL);
	i = ft_strlen(s) - 1;
	num_word = countword(s, c);
	splited = malloc((sizeof (char *)) * (num_word + 1));
	if (!splited)
		return (NULL);
	while (num_word--)
	{
		while (s[i] == c && s[i])
			i--;
		if (s[i] != c && s[i])
		{
			splited[num_word] = ft_strndup(s, i, countchar(s, i, c) + 1);
			if (!splited[num_word])
				return (ft_free(splited, num_word), NULL);
			i = i - countchar(s, i, c) - 1;
		}
	}
	splited[countword(s, c)] = 0;
	return (splited);
}

// int		main(int argc, char **argv)
// {
// 	char **split;
// 	int i = 0;
// 	(void)argc;
// 	(void)argv;

// 	// split = ft_split(strdup("Tripouille"), ' ');
// 	split = ft_split("  tripouille  42  ", ' ');

// 	while(split[i])
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// 	printf("%s\n", split[i]);
// 	ft_free(split, 0);
// }
