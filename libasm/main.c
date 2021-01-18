#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

ssize_t		ft_strlen(const char *str);
ssize_t		ft_write(int i, char *str, int n);
ssize_t		ft_read(int fildes, void *buf, size_t nbyte);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(char *dst, const char *src);
char		*ft_strdup(const char *s1);

int main	(void)
{
	char	*str = "Hello, World!";
	char	*dst = "";
	char	*f = "test.txt";
	int		file;

	printf("STRLEN:\n");
	printf("strlen:    %ld\n", strlen(str));
	printf("ft_strlen: %ld\n", ft_strlen(str));
	printf("-----------------------------------\n");
	printf("STRCPY:\n");
	dst = ft_strdup(str);
	printf("strcpy:    %s\n", strcpy(dst, str));
	printf("ft_strcpy: %s\n", ft_strcpy(dst, str));
	printf("-----------------------------------\n");
	printf("STRCMP:\n");
	printf("strcmp:    %d\n", strcmp(dst, str));
	printf("ft_strcmp: %d\n", ft_strcmp(dst, str));
	printf("-----------------------------------\n");
	printf("WRITE:\n");
	write(1, "write:    ", 10);
	write(1, str, strlen(str));
	ft_write(1, "\nft_write: ", 11);
	ft_write(1, str, ft_strlen(str));
	printf("\n-----------------------------------\n");
	printf("READ:\n");
	file = open(f, O_RDONLY);
	write(1, "read:     ", 11);
	read(file, dst, 20);
	write(1, dst, 20);
	close(file);
	file = open(f, O_RDONLY);
	ft_write(1, "\nft_read:  ", 12);
	ft_read(file, dst, 20);
	ft_write(1, dst, 20);
	close(file);
	printf("\n-----------------------------------\n");
	printf("STRDUP:\n");
	dst = strdup(str);
	printf("strdup:    %s\n", dst);
	free(dst);
	dst = ft_strdup(str);
	printf("ft_strdup: %s\n", dst);
	free(dst);
}
