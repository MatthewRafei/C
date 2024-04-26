#include<stdio.h>
#include<stdlib.h>

int main()
{

	const float pay_rate = 12.0;
	float hours = 0;

	printf("How many hours have your worked this week: ");
	scanf("%f", &hours);

	if(hours > 40.0){
		float overtime_hours = 0.0;
		float overtime_pay = 0.0;

		float reg_pay = 40.0 * pay_rate;

		overtime_hours = hours - 40.0;
		overtime_pay = (overtime_hours * pay_rate) * 1.5;

		float total_pay = reg_pay + overtime_pay;
	}
	else{
		float total_pay = hours * pay_rate;
	}

	if(total_pay > 300){
		float fifteen_per_tax_income = 0;
	}





		







	return 0;
}
