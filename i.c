
#include <stdio.h>

int main()
{
	int i = 0;
	int j = 1;

	i = ++j;
	printf("++j --> i = %d\n", i);

	j = 1;
	i = j++;
	printf("j++ --> i = %d\n", i);
	printf("j++ --> i = %d\n", i);
}