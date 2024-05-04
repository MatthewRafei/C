#include<stdlib.h>
#include<stdio.h>

#define YEARS 5
#define MONTHS 12

int main()
{


	double rainfall[YEARS][MONTHS] = 
	{
		{37.3, 22.5, 14.8, 68.7, 20.5, 64.0, 51.1, 81.9, 72.7, 99.7, 58.2, 27.1},
		{58.2, 90.0, 21.1, 72.5, 19.4, 3.00, 11.1, 11.4, 93.1, 27.1, 51.3, 72.3},
		{16.1, 14.5, 71.2, 26.7, 57.3, 72.2, 66.4, 98.1, 84.6, 28.6, 32.2, 50.2},
		{28.6, 65.7, 9.60, 97.3, 71.1, 3.20, 76.2, 56.3, 69.2, 45.9, 93.6, 17.8},
		{45.9, 93.6, 17.8, 72.9, 70.6, 55.3, 88.5, 99.6, 25.4, 70.5, 70.0, 95.0}
	};

	double sum = 0.0;
	double yearlySum[YEARS] = {0};
	double monthlySum[MONTHS] = {0};
	double yearlyAvg[YEARS] = {0};
	double monthlyAvg[MONTHS] = {0};

	// Calculate the sum for each year
	for(int i = 0; i < YEARS; i++){
		sum = 0.0;
		for(int j = 0; j < MONTHS; j++){
			sum += rainfall[i][j];
		}
		yearlySum[i] = sum;
	}
	
	// Calculate the sum for same month in each year
	for(int i = 0; i < MONTHS; i++){
		sum = 0.0;
		for(int j = 0; j < YEARS; j++){
			sum += rainfall[j][i];
		}
		monthlySum[i] = sum;
	}

	// Print sum for the years
	printf("YEAR    RAINFALL (inches)\n");
	for(int i = 0; i < YEARS; i++){
		printf("201%d    %.1f\n", i, yearlySum[i]);
	}
	
	// Get each years average
	for(int i = 0; i < YEARS; i++){
		yearlyAvg[i] = yearlySum[i] / MONTHS;
	}
	
	sum = 0.0;
	
	for(int i = 0; i < YEARS; i++){
		sum += yearlyAvg[i] / YEARS;
	}
	
	// Should be 641.34 
	printf("\nThe yearly average is %.1f\n\n", sum);

	for(int i = 0; i < MONTHS; i++){
		monthlyAvg[i] = monthlySum[i] / YEARS;
	}

	printf("MONTHLY AVERAGES:\n\n");

	printf("Jan    Feb    Mar    Apr    May    Jun    Jul    Aug    Sep    Oct    Nov    Dec\n");
	
	for(int i = 0; i < MONTHS; i++){
		printf("%.1f   ", monthlyAvg[i]);
	}

	return 0;
}
