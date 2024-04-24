#include<stdio.h>

int main()
{

	unsigned int a = 60; // 0011 1100
	unsigned int b = 13; // 0000 1101
	
	int and_result = 0;
	int or_result = 0;
	int xor_result = 0;


	and_result = a & b; // 0000 1100 //12
	or_result = a | b; // 0011 1101 //61
	xor_result = a ^ b; // 0011 0001 //49
	
	printf("And operator result is %d\n", and_result);
	printf("Or operator result is %d\n", or_result);
	printf("Xor operator result is %d\n", xor_result);

	int previous_a_value = a;
	a = a << 2; // 0000 0000 0000 0000 0000 0000 1111 0000
	printf("A was equal to %d, but now is equal to %d\n", previous_a_value, a);
	
	previous_a_value = a;
	a = a << 2; // 0000 0000 0000 0000 0000 0011 1100 0000
	printf("A was equal to %d, but now is equal to %d\n", previous_a_value, a);

	previous_a_value = a;
	a = a >> 4 ; // 0000 0000 0000 0000 0000 0000 0011 1100
	printf("A was equal to %d, but now is equal to %d\n", previous_a_value, a);
	
        previous_a_value = a;
	a = a >> 4; // 0000 0000 0000 0000 0000 0000 0000 0011
	printf("A was equal to %d, but now is equal to %d\n", previous_a_value, a);
	

	return 0;
}
