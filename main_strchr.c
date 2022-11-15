#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char	*str, int c);

int main()
{
	char	str[] = "hello world";
	printf("%s\n", strchr(str, 'a'));
	printf("%s\n", ft_strchr(str, 'a'));
}