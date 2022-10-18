/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haguezou <haguezou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:15:43 by haguezou          #+#    #+#             */
/*   Updated: 2022/10/18 16:38:55 by haguezou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	f_index;
	int	l_index;
	int	len;
	if (!s1[0] && !set[0])
		return (NULL);
	if (!s1 || (!s1 && !set))
		return (NULL);
	if (!set)
		return ((char *)s1);
	i = 0;
	while (ft_strchr(set, s1[i]))
	{
		i++;
	}
	f_index = i;
	if (ft_strlen((char *)s1) > 1)
	{
		i = ft_strlen((char *)s1) - 1;
		while (ft_strchr(set, s1[i]))
		{
			i--;
		}
		l_index = i;
		len = (l_index - f_index) + 1;
		return (ft_substr((char *)s1, f_index, len));
	}
	return 0;
}
