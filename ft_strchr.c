/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsitoand <tsitoand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 09:18:54 by tsitoand          #+#    #+#             */
/*   Updated: 2026/01/23 23:19:55 by tsitoand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	d;

	d = (const char) c;
	i = 0;
	while ((s[i] != '\0') && (s[i] != d))
	{
		i++;
	}
	if (s[i] == d)
		return ((char *)s + i);
	return (0);
}
