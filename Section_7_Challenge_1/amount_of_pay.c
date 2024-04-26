#include<stdio.h>
#include<stdlib.h>

#define WAGE 12.0
#define FTE_HRS 40.0
#define OT_RATE 1.5

#define FIRST_TAX_RATE 15.0
#define SECOND_TAX_RATE 20.0
#define TAX_RATE_REST 25.0

// First tax rate applies to the first $300
// Second tax rate applies to the next $150
// Then tax rate of 25% applies to the rest

int main()
{
	float total_hrs = 0;
	float total_wage = 0;
	float ot_hrs = 0;
	float ot_wage = 0;

	printf("How many hours have you worked this week: ");
	scanf("%f", &total_hrs);

	if(total_hrs > FTE_HRS){
		ot_hrs = total_hrs - FTE_HRS;
		ot_wage = total_hrs * WAGE * OT_RATE;
		total_wage = FTE_HRS * WAGE + ot_wage;
	}
	else{
		total_wage = total_hrs * WAGE;
	}
	
	






	return 0;
}





	
