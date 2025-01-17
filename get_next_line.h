#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#define BUFFER_SIZE  2025
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(const char *senc);
char	*ft_strjoin(char const *s1, char const *s2);
char    *ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
