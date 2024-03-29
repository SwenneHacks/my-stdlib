/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_new.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 17:15:22 by swofferh      #+#    #+#                 */
/*   Updated: 2021/02/23 12:07:51 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/*
** FT_LSTNEW: Allocates with malloc and returns a new
** 	element. The variable content is initialized with
** 	the value of the parameter content. The variable
** 	next is initialized to NULL.
*/
t_list		*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
