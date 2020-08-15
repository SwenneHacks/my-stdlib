/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:13:30 by swofferh      #+#    #+#                 */
/*   Updated: 2020/08/11 18:43:11 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** FT_MEMMOVE: Non-destructively copies len bytes
** from string src to string dst. The two strings may overlap
** returns the original value of dst.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
		while (len)
		{
			len--;
			((char *)dst)[len] = ((char *)src)[len];
		}
	return (dst);
}
