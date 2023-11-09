/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:35:25 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/11/09 23:22:07 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int countword(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i])
		{
			count++;
			while(s[i] != c && s[i])
				i++;
		}
		else
		i++;
	}
	return (count);
}
int countchar(const char *s, int i, char c)
{
	int count;

	count = 0;
	while (s[i] != c && s[i])
	{
		i--;
		count++;
	}
	return (count);
}

char *ft_strndup(const char *s, int from, int to)
{
	int i;
	char *dup;

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
	while (i >= 0)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

char **ft_split(char const *s, char c)
{
	int	i;
	int num_word;
	char **splited;

	if (!s)
		return (NULL);
	i = ft_strlen(s) - 1;
	num_word = countword(s, c);
	splited = malloc((sizeof (char *)) * (num_word + 1));
	if (!splited)
		return(NULL);
	while (num_word--)
	{
		while (s[i] == c && s[i])
		i--;
		if (s[i] != c && s[i])
		{
			splited[num_word] = ft_strndup(s, i, countchar(s, i, c));
			if (!splited[num_word])
				return (ft_free(splited, num_word), NULL);
			i = i - countchar(s, i , c);
		}
	}
	splited[countword(s, c)] = 0;
	return (splited);
}


// #include <stdlib.h>
// #include <unistd.h>

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int		main(int argc, const char *argv[])
// {
// 	char	**tabstr;
// 	int		i;
// 	int		arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	i = 0;
// 	if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (!(tabstr = ft_split("          ", ' ')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 2)
// 	{
// 		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 3)
// 	{
// 		if (!(tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 4)
// 	{
// 		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 		free (tabstr[i]);
// 	}
// 	else if (arg == 5)
// 	{
// 		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 6)
// 	{
// 		if (!(tabstr = ft_split("", 'z')))
// 			ft_print_result("NULL");
// 		else
// 			if (!tabstr[0])
// 				ft_print_result("ok\n");
// 	}
// 	return (0);
// }
