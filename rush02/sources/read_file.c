/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:05:59 by npremont          #+#    #+#             */
/*   Updated: 2023/09/23 15:08:12 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

typedef struct s_read_file
{
	int			fd;
	char		*buf;
	char		tmp;
	ssize_t		read_bytes;
	size_t		total;
	char		*new_buf;
}	t_read_file;

void	*ft_memcpy(void *dest, const void *src, unsigned long n)
{
	unsigned long	i;
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	i = 0;
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

char	*alloc_buffer(t_read_file *data)
{
	data->new_buf = malloc(data->total + data->read_bytes + 1);
	if (data->buf)
	{
		ft_memcpy(data->new_buf, data->buf, data->total);
		free(data->buf);
	}
	ft_memcpy(data->new_buf + data->total, &(data->tmp), data->read_bytes);
	return (data->new_buf);
}

char	*read_file(const char *path)
{
	t_read_file	data;

	data.buf = NULL;
	data.total = 0;
	data.fd = open(path, O_RDONLY);
	if (data.fd == -1)
		return (NULL);
	data.read_bytes = read(data.fd, &(data.tmp), 1);
	while (data.read_bytes > 0)
	{
		data.buf = alloc_buffer(&data);
		if (!data.buf)
			return (NULL);
		data.total += data.read_bytes;
		data.read_bytes = read(data.fd, &(data.tmp), 1);
	}
	data.buf[data.total] = '\0';
	close(data.fd);
	return (data.buf);
}
