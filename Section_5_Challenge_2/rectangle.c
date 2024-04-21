#include<stdio.h>
#include<stdlib.h>

double get_perimeter(double height, double width){return (height + width) * 2;}

double get_area(double height, double width){return width * height;}



int main(int argc, char *argv[])
{
	if(argc < 3){
		printf("Please provide a width and a height");
		return -1;
	}
	
	double width = atof(argv[1]);
	double height = atof(argv[2]);


	double perimeter = get_perimeter(height, width);
	double area = get_area(height, width);


	printf("The area of the rectangle is %.2f, the width is %.2f, and the height is %.2f\n", area, width, height);



	return 0;
}




