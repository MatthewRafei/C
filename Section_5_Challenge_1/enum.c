#include<stdio.h>


enum Company{
	Google,
	Facebook,
	Xerox,
	Yahoo,
	Ebay,
	Microsoft
};

int main()
{
	enum Company ebay = Ebay;
	enum Company xerox = Xerox;
	enum Company google = Google;

	printf("%d\n", xerox);
	printf("%d\n", google);
	printf("%d\n", ebay);




	return 0;
}
