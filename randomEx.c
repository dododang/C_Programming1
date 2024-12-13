#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
	int i;
	srand((unsigned int)time(NULL));
	for (i = 0; i < 20; i++)
		printf("%d\n", rand() % 12);

	return 0;
}
