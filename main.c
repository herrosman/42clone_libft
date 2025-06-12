#include "libft.h"

int main()
{
	char *str = "hello World";
	char *res = ft_substr(str, 0, 10);
	printf("%s\n", res);
}