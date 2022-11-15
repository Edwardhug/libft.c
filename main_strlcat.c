#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size);

int	main()
{
	char	dest[] = "salade";
	char	src[] = "tomate";
	size_t	size = 2 ;
	char	dest2[] = "salade";
	char	src2[] = "tomate";

	size_t	i = ft_strlcat(dest, src, size);
	size_t	i2 = strlcat(dest2, src2, size);
	printf("%s\n", dest);
	printf("%s\n", dest2);
	printf("%zu\n", i);
	printf("%zu\n", i2);
}