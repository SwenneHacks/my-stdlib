/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 18:26:19 by swofferh      #+#    #+#                 */
/*   Updated: 2020/08/11 18:39:15 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** FT_ISPRINT: checks for a printable character
** returns zero if character tests false, non-zero is true.
*/

int		ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
