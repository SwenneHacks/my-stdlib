/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_textsize.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sofferha <sofferha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 18:41:09 by sofferha      #+#    #+#                 */
/*   Updated: 2022/02/03 14:08:22 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** This function counts the amount of lines in a text file. (handy with gnl)
*/
int     ft_textsize(const char *str)
{
	int	i;
    int len;
	int newline;

	i = 0;
	newline = 1;
	while (str[i])
	{
		if (str[i] == '\n')
			newline++;
		i++;
	}
    len = newline;
	return (len);
}