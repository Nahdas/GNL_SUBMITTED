/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:38:29 by alac              #+#    #+#             */
/*   Updated: 2018/11/23 13:50:41 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*point;

	point = s;
	i = 0;
	if (!(n == 0))
	{
		while (i < n)
		{
			point[i] = '\0';
			i++;
		}
	}
}
