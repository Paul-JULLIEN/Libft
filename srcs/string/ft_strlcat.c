/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:29:47 by pauljull          #+#    #+#             */
/*   Updated: 2020/07/03 14:39:51 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	dst_size;
	size_t	src_size;

	count = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size <= dst_size)
		return (size + src_size);
	while (count < size - dst_size - 1 && count < src_size)
	{
		dst[dst_size + count] = src[count];
		count += 1;
	}
	dst[dst_size + count] = 0;
	return (src_size + dst_size);
}
