#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
	int p;
	int i;

	int primes[50] = {0};
	int prime_index = 2;

	bool is_prime;

	// Hardcoded prime numbers
	primes[0] = 2;
	primes[1] = 3;

	for(p = 5; p <= 100; p = p + 2){
		is_prime = true;
		for(i = 1; is_prime && p / primes[i] >= primes[i]; i++){
			if(p % primes[i] == 0){
				is_prime = false;
			}
		}
		if(is_prime == true){
			primes[prime_index] = p;
			prime_index++;
		}
	}

	for(i = 0; i < prime_index; i++){
		printf("%i  ", primes[i]);
	}
	printf("\n");
	return 0;
}
