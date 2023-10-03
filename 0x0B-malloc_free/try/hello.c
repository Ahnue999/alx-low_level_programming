#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr;
	int i;

	printf("Hello waorld\n");

	ptr = (int *)malloc(4 * sizeof(int));

	for (i = 0; i < 4; i++)
	{
		*(ptr + i) = i + 1;
		printf("%d\n", ptr[i]);
	}

	//free(ptr);

	return (0);
}
