/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 12:49:11 by passef            #+#    #+#             */
/*   Updated: 2018/01/05 11:11:01 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define MALLCHECK(x) if (!x) return (-1);
# define BUFF_SIZE 42

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
unsigned int	ft_strlen(const char *s);
char			*ft_strdup(const char *s1);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strcat(char *restrict s1, const char *restrict s2);
char			*ft_strncat(char *restrict s1,
const char *restrict s2, size_t n);
size_t			ft_strlcat(char *restrict dst,
const char *restrict src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *big, const char *little);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putwchar(unsigned int w);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem));

char			*ft_ftoa(double value, int accur);
char			*ft_lftoa(long double value, int accur);
char			*ft_itoa_base(unsigned int n, int base, int up);
char			*ft_utoa(unsigned int n, int base);
char			*ft_llutoa(unsigned long long n, int base);
char			*ft_lltoa(long long n);
char			*ft_ltoa_base(unsigned long n, int base, int up);
void			ft_lstaddend(t_list **alst, t_list *new);
void			ft_lstrev(t_list **lst);
void			ft_lstclr(t_list **lst);
t_list			*ft_lstcat(t_list **lst1, t_list *lst2);
t_list			*ft_lstjoin(t_list *lst1, t_list *lst2);
t_list			*ft_lstfind(t_list *begin_list,
void *content_ref, int (*cmp)());
int				ft_strisalpha(const char *str);
int				ft_strisnum(const char *str);
int				ft_strisalnum(const char *str);
int				ft_strisprint(const char *str);
char			*ft_strrev(char *s);
int				ft_size_bin(unsigned int value);
size_t			ft_lstsize(t_list *lst);
int				get_next_line(const int fd, char **line);
int				ft_copyuntil(char **dst, char *src, char c);

#endif
