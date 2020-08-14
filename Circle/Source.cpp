#include <stdio.h>
#define Pi 3.14159265359
int main()
{
	float r;
	scanf_s("%f", &r);
	printf("%f", Pi * r * r);
	return 0;
}