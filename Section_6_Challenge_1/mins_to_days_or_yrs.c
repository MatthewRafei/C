#include<stdio.h>
#include<stdlib.h>

//Convert minutes to days or years
int main()
{
	double years = 0;
	double days = 0;
	double mins = 0;

	const double min_in_year = 525600;
	const int days_in_year = 365;

	double usr_mins = 0.0;
	
	printf("Please enter the number of minutes you wish to enter: ");
	scanf("%lf", &usr_mins);

	
	mins = usr_mins;
	days = usr_mins / min_in_year * days_in_year;
	years = days / days_in_year;

	printf("You have entered %.0f minutes, which is %.1f days and %f years.", mins, days, years);


	
	




	return 0;
}
