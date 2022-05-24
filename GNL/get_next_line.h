/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 09:55:33 by ozahir            #+#    #+#             */
/*   Updated: 2021/12/07 22:20:42 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include	<stdlib.h>
# include	<unistd.h>
# include	<fcntl.h>

# define BUFFER_SIZE 2

size_t	ft_strlcpyg(char *dst, const char *src, size_t dstsize);
int		ft_strleng(char const *s);
char	*ft_strdupg(const char *s1);
char	*ft_strjoing(char *s1, char const *s2);
char	*newline(char *left);
int		nl_sig(char *str);
char	*get_next_line(int fd);
char	*rest(char	*rest);

#endif
