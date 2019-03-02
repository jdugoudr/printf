/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdugoudr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:17:50 by jdugoudr          #+#    #+#             */
/*   Updated: 2018/11/17 17:23:53 by jdugoudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(const t_list *l)
{
	size_t	i;

	i = 0;
	if (l == NULL)
		return (i);
	while (l->next != NULL)
	{
		l = l->next;
		i++;
	}
	i++;
	return (i);
}