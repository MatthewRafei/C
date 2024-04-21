#include<stdio.h>

int main()
{
	_Bool isOn = 0;

	printf("isOn is equal to %d\n", isOn);

	if(isOn == 0){
		isOn = 1;
	}

	printf("isOn is now equal to %d\n", isOn);

	return 0;
}
