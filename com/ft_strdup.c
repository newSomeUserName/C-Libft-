/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerman <tgerman@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-11 10:44:14 by tgerman           #+#    #+#             */
/*   Updated: 2026-10-11 10:44:14 by tgerman          ###   ########.jp       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s, len + 1);
	return (dup);
}
