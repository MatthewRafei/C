#include<stdio.h>


enum Company{
	Google,
	Facebook,
	Xerox,
	Yahoo,
	Ebay,
	Microsoft
};


int get_index(enum Company testcase)
{
	switch(testcase){
		case Google :
			return 0;
			break;
		case Facebook :
			return 1;
			break;
		case Xerox :
			return 2;
			break;
		case Yahoo :
			return 3;
			break;
		case Ebay :
			return 4;
			break;
		case Microsoft :
			return 5;
			break;
	}
}

int main()
{
	enum Company ebay = Ebay;
	enum Company xerox = Xerox;
	enum Company google = Google;

	printf("%d\n", get_index(xerox));
	printf("%d\n", get_index(google));
	printf("%d\n", get_index(ebay));




	return 0;
}
