	#include "libft.h"
	int main()
{
	
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};

	printf("%d\n", ft_memcmp(s, s2, 1));
	printf("%d\n", ft_memcmp(s2, s, 1));
	printf("%d\n", ft_memcmp(s2, s3, 4));
}