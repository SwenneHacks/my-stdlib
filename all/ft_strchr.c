/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:14:40 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/19 22:22:31 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** FT_STRCHR: locate first occurence of character in string
** returns a pointer to the located character, NULL if it does not appear.
*/
char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*str;
	char	cha;

	index = 0;
	cha = (char)c;
	str = (char *)s;
	while (str[index] != '\0')
	{
		if (str[index] == (cha))
			return (&str[index]);
		index++;
	}
	if (str[index] == '\0' && cha == '\0')
		return (&str[index]);
	return (0);
}
