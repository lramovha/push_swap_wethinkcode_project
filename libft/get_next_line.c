/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:17:53 by lramovha          #+#    #+#             */
/*   Updated: 2019/10/09 17:18:00 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int      ft_num_lines(int ret, int fd, char **str, char **line)
{
    int     len;
    char    *temp_hold;

    len = 0;
    while (str[fd][len] != '\0' && str[fd][len] != '\n')
    {
        len++;
    }
    if (str[fd][len] == '\n')
    {
        *line = ft_strsub(str[fd], 0, len);
        temp_hold = ft_strdup(str[fd] + (len + 1));
        free(str[fd]);
        str[fd] = temp_hold;
        if (str[fd][0] == '\0')
        {
            ft_strdel(&str[fd]);
        }
    }
    else if (str[fd][len] == '\0')
    {
        if (ret == BUFF_SIZE)
        {
            return (get_next_line(fd, line));
        }
        *line = ft_strdup(str[fd]);
        ft_strdel(&str[fd]);
    }
    return (1);
}

int     get_next_line(const int fd, char **line)
{
    int         ret;
    char        *tmp;
    char        buffer[BUFF_SIZE + 1];
    static char *str[255];

    if (fd < 0 || line == NULL || read(fd, NULL, 0) < 0)
        return (-1);
    while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
    {
        buffer[ret] = '\0';
        if (str[fd] == NULL)
        {
            str[fd] = ft_strnew(1);
        }
        tmp = ft_strjoin(str[fd], buffer);
        free(str[fd]);
        str[fd] = tmp;
        if (ft_strchr(buffer, '\n'))
            break;
    }
    if ((ret == 0 && str[fd] == NULL) || str[fd][0] == '\0')
    {
        return (0);
    }
    else if (ret < 0)
        return (-1);
    return (ft_num_lines(ret, fd, str, line));
}
