/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    isalnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsitoand <tsitoand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:19:25 by tsitoand          #+#    #+#             */
/*   Updated: 2026/01/20 08:55:58 by tsitoand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit( int c );
int	ft_isalpha(int c);

int	ft_isalnum(int c)
{
	if ((ft_isdigit(c) == 1) || (ft_isalpha(c) == 1))
		return (1);
	return (0);
}
