#include<stdio.h>

int main()
{

	int a = 0;
	char b = 0;
	long c = 0;
	long long d = 0;
	double e = 0;
	long double f = 0;

	printf("The sizeof int is %d\n", sizeof(a));
	printf("The sizeof char is %d\n", sizeof(b));
	printf("The sizeof long is %d\n", sizeof(c));
	printf("The sizeof long long is %d\n", sizeof(d));
	printf("The sizeof double is %d\n", sizeof(e));
	printf("The sizeof long double is %d\n", sizeof(f));

	return 0;
}
