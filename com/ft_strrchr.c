/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerman <tgerman@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-11 10:44:14 by tgerman           #+#    #+#             */
/*   Updated: 2026-10-11 10:44:14 by tgerman          ###   ########.jp       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last);
}
