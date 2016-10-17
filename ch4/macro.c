#include <stdio.h>

#define KPOP 50000000
#define PI 3.14
#define PRT	printf("매크로 상수 예제 종류\n")

int main(void)
{
	double radius = 2.83;

	printf("한국인구: %d\n", KPOP);
	printf("원 면적: %f\n", radius * radius * PI);
	PRT;

	return 0;
}