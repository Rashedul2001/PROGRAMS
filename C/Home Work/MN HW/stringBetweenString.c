#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "teacher teach tea";
	char search[] = "ac";
	char *ptr = strstr(str, search);

	if (ptr != NULL) /* Substring found */
	{
		printf("'%s' contains '%s'\n", str, search);
	}
	else /* Substring not found */
	{
		printf("'%s' doesn't contain '%s'\n", str, search);
	}

	return 0;
}
