/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:55:19 by rlohitha          #+#    #+#             */
/*   Updated: 2026/10/01 12:03:05 by rlohitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_length(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	if (!dest || !src)
		return (dest);
	dest_len = ft_get_length(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
