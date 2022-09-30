/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haguezou <haguezou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:13:59 by haguezou          #+#    #+#             */
/*   Updated: 2022/09/30 16:24:04 by haguezou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
size_t	ft_strlen(char *string)
{
	int i = 0;
	while (*string)
	{
		i++;
		string++;
	}
	return i;
}
#include<stdio.h>
int main()
{
	char *str = "hassan";
	printf("%zu",ft_strlen(str));
	return 0;
}
