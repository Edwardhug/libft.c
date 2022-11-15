#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char	*str, int c);

int main()
{
	char	str[] = "hello world";
	printf("%s\n", strrchr(str, 'e'));
	printf("%s\n", ft_strrchr(str, 'e'));
}