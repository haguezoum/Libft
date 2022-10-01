/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haguezou <haguezou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:56:11 by haguezou          #+#    #+#             */
/*   Updated: 2022/09/30 20:02:07 by haguezou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stddef.h>

void	*ft_memset(void *ptr, int c, size_t len)
{
	int	i;

	i = 0;
	while (*(char *)ptr && i < len)
	{
		*(char *)ptr = c;
		ptr++;
		i++;
	}
	return (ptr - i);
}
