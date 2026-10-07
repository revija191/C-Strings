/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:10:39 by rlohitha          #+#    #+#             */
/*   Updated: 2026/10/01 12:04:09 by rlohitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_length(char *dest)
{
	int	len;

	len = 0;
	while (dest[len])
		len++;
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_len;
	unsigned int	i;

	if (!dest || !src)
		return (dest);
	dest_len = ft_get_length(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
