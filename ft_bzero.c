/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saifalha <saifalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:38:58 by saifalha          #+#    #+#             */
/*   Updated: 2025/07/28 13:23:27 by saifalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Set the first n bytes of memory to 0 (like clearing it)
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
