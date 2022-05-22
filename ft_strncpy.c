
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";

	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	return (0);
}