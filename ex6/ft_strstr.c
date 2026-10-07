/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:55:14 by rlohitha          #+#    #+#             */
/*   Updated: 2026/10/01 12:07:52 by rlohitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_length(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	if (!str || !to_find)
		return (0);
	i = 0;
	len = ft_get_length(to_find);
	if (len == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (j == len)
			return (&str[i]);
		i++;
	}
	return (0);
}
