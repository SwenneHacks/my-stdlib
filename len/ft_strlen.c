/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:31:45 by swofferh      #+#    #+#                 */
/*   Updated: 2020/08/11 18:48:56 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** FT_STRLEN: Computes the length of the string s
** returns the number of characters that precede
** the terminating NUL character.
*/

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
