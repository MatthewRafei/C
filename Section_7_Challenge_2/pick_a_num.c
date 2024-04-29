#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	time_t t = 0;
	srand((unsigned) time(&t));
	int rnd_num = rand() % 21;
	int usr_num = 0;

	for(int usr_tries = 5; usr_tries >=  0; usr_tries--){
		
		printf("Please enter a number from (0 - 20): ");
		scanf("%d", &usr_num);

		if(usr_num < 0 || usr_num > 20){
			printf("This is not a correct value please try again.\n");
			usr_tries++;
			continue;
		}

		if(usr_num == rnd_num){
			printf("Computer choose %d. Congrats you guessed the correct number\n", rnd_num);
			break;
		}
		else{
			printf("Sorry the correct number was %d. You have %d tries left\n", rnd_num, usr_tries);
		}
	}

	return 0;
}
