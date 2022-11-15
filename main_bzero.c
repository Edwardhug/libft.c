#include <strings.h>
#include <stdio.h>

void	*ft_bzero(void *x, size_t len);

int	main()
{
	char str[] = "hello world";
	ft_bzero(str, 25);
	printf("%c\n", *str);

}