#include "libft.h"

int	main()
{
	char	dst[] = "12345";
	char	src[] = "234";
	printf("%s\n", memmove(dst, src, 3));

	char	dst2[] = "12345";
	char	src2[]= "234";
	printf("%s\n", ft_memmove(dst2, src2, 3));
}