#include <string.h>
#include <stdio.h>

void	*ft_memset(void *x, int a, size_t len);

int	main()
{
	char str[] = "hello world";
	printf("%s\n", ft_memset(str, 'a', 25));
}