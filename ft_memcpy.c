/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haguezou <haguezou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:35:57 by haguezou          #+#    #+#             */
/*   Updated: 2022/10/01 21:58:17 by haguezou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stddef.h>

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	while (*(char *)src && n != 0)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		n--;
	}
	*(char *)dest = '\0';
}
