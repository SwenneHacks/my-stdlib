/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 20:37:02 by swofferh      #+#    #+#                 */
/*   Updated: 2020/08/17 22:32:29 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** FT_STRLCPY: copies all chars in a string to a limit number of chars (len)
** returns the new size of the src string after copying it with dst limit.
*/

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char *str;

	str = ft_memccpy(dst, src, '\0', dstsize);
	if (!str && dstsize != 0)
		dst[dstsize - 1] = '\0';
	return (ft_strlen(src));
}