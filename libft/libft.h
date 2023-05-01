/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:38:20 by djin              #+#    #+#             */
/*   Updated: 2023/05/01 14:45:33 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int				ft_isalpha(int a);

int				ft_isdigit(int c);

int				ft_isalnum(int a);

int				ft_isascii(int asc);

int				ft_strlen(const char *str);

int				ft_strlcpy(char *dest, const char *src, unsigned int size);

int				ft_strlcat(char *dest, const char *src, unsigned int size);

int				ft_strncmp(const char *str1, const char *str2, unsigned int n);

int				ft_memcmp(const void *line, const void *rhs, size_t count);

int				ft_atoi(const char *str);

int				ft_isprint(int arg);

char			ft_toupper(char c);

char			ft_tolower(char u);

char			*ft_strrchr(const char *str, int c);

char			*ft_strchr(const char *str, int c);

char			*ft_strnstr(const char	*str, const char *to_find, size_t len);

char			*ft_strdup(const char *s);

char			*ft_substr(char const *s, unsigned int start, size_t len);

char			*ft_strjoin(char const *s1, char const *s2);

void			ft_bzero(void *s, size_t n);

void			*ft_memset(void *dest, int ch, size_t count);

void			*ft_memcpy(void *dest, const void *src, size_t count);

void			*ft_memmove(void *dest, const void *src, size_t count);

void			*ft_memchr(void *ptr, int ch, size_t count);

void			*ft_calloc(size_t num, size_t size);
#endif