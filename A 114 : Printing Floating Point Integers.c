#include <stdio.h>

int main()
{
	double var;
	//input the variable var and print it upto 2, 4 and 6 decimal places here.
	//note that every output must be on a new line
	//you can use the '\n' token to go to a new line
    scanf("%lf", &var);
    printf("%.2lf",var);
    printf("\n%.4lf",var);
    printf("\n%.6lf",var);



	return 0;
}
