#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
@@ -15,10 +14,10 @@ int main(void)
	char d;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int))
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
		return (0);
		printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
		printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
		printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
		printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
		printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
