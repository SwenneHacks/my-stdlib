/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 20:47:54 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/19 22:22:23 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** FT_STRJOIN: Allocates malloc and returns a new
** string, result of the concatenation of s1 and s2.
*/
char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (result == NULL)
		return (NULL);
	while (s1[a] != '\0')
	{
		result[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		result[a] = s2[b];
		a++;
		b++;
	}
	result[a] = '\0';
	return (result);
}
