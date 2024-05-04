#include<stdlib.h>
#include<stdio.h>

#define YEARS 5
#define MONTHS 12

int main()
{
	float rainfall[YEARS][MONTHS] =
	{
		{10.28,10.57,0.33,0.86,10.31,0.41,0.60,0.74,0.31,10.41,0.40,0.23},
		{20.28,0.57,10.33,0.86,0.31,0.41,0.60,0.74,0.31,0.41,0.40,10.23},
		{10.28,0.57,0.33,0.86,10.31,0.41,0.60,0.74,0.31,0.41,0.40,0.23},
		{20.28,0.57,10.33,0.86,0.31,10.41,0.60,10.74,0.31,0.41,0.40,0.23},
		{10.28,0.57,0.33,10.86,0.31,0.41,0.60,0.74,10.31,0.41,0.40,0.23},
	};

	float year_one = 0.0;


	for(int i = 0; i < YEARS; i++){
		for(int j = 0; j < MONTHS; j++){
			//printf("%.2f, ", rainfall[i][j]);
			//
			//year_one += rainfall[i][j];
		}
		printf("%f\n", year_one);

		year_one = 0.0;

		printf("\n");
	}

	






	return 0;
}
