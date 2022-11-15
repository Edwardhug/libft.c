#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t len);

int	main()
{
	char	dst[] = "hello world";
	char	src[] = "world";
	printf("%s\n", memcpy(dst, src, 5));

	char	dst2[] = "hello world";
	char	src2[]= "world";
	printf("%s\n", ft_memcpy(dst2, src2, 5));
}