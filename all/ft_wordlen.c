/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wordlen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 20:53:06 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/19 22:21:34 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** FT_WORDLEN counts the amout of chars/lettersin a word.
*/
int		ft_wordlen(char const *str, int i, char space)
{
	int len;

	len = 0;
	while (str[i] && str[i] != space)
	{
		len++;
		i++;
	}
	return (len);
}
