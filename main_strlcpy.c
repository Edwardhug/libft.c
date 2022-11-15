#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size);

int	main()
{
	char	dst[] = "hello";
	char	src[] = " world";

	strlcpy(dst, src, 1);
	printf("%s\n", dst);

	char	dst2[] = "hello";
	char	src2[] = " world";

	ft_strlcpy(dst2, src2, 1);
	printf("%s\n", dst2);
}
