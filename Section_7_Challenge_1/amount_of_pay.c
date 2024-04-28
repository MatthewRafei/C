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

// This code is an example of being bothered by not knowing data structures lol

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
		ot_wage = ot_hrs * WAGE * OT_RATE;
		total_wage = FTE_HRS * WAGE + ot_wage;
	}
	else{
		total_wage = total_hrs * WAGE;
	}

	float tax = 0.0;
	float holder = total_wage;
	
	if(total_wage > 300){
		total_wage -= 300;
		if(total_wage > 150){
			total_wage -= 150;
			if(total_wage > 0){
				total_wage = 25 * total_wage / 100;
			}
			total_wage += 20 * 150 / 100;
		}
		else{
			total_wage = 20 * total_wage / 100;
		}
		total_wage += 15 * 300 / 100;
	}
	else{
		total_wage = 15 * total_wage / 100;
	}

	tax = total_wage;
	total_wage = holder;

	printf("Your total wage is %.2f, and you paid %.2f in taxes", total_wage, tax);

	return 0;
}
