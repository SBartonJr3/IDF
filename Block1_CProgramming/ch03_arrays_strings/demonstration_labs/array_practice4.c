#include <stdio.h>

int main(void)
{
	int everyonesAges[8] = { 0 };
	everyonesAges[0] = 39;
	everyonesAges[1] = 42;
	everyonesAges[2] = 42;
	everyonesAges[3] = 42;
	everyonesAges[4] = 42;
	everyonesAges[5] = 42;
	everyonesAges[6] = 42;
	everyonesAges[7] = 42;

	int i = 0;
	for (i = 0; i < 8; i++)
	{
		printf("everyoneAge[%d] = %d\n", i, everyonesAges[i]);
	}

	// Option #1 - Element by element
//	char favoriteSaying[] = { 10, 'B', 'a', 'z', 'i', 'n', 'g', 'a', '!', 10, 0};
	// Option #2 - String method
	char favoriteSaying[] = { "\nBazinga!\n"};
	printf("My favorite saying is: %s\n", favoriteSaying);

	getchar();
	return 0;
}
