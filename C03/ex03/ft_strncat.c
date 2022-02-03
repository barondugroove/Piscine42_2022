/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:15:58 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/25 19:50:18 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[x])
		x++;
	while (src[y] && y < nb)
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}
