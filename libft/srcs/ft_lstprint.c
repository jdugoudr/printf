/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdugoudr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:47:36 by jdugoudr          #+#    #+#             */
/*   Updated: 2018/11/25 14:15:54 by jdugoudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *l, void (*f)(void*))
{
	if (l == NULL)
		return ;
	while (l)
	{
		f(l->content);
		l = l->next;
	}
}