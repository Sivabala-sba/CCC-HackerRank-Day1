#include <stdio.h>

int main()
{
	long long var1, var2, sum;
	//input values of var1 and var2 as long long integers and print their sum;
    scanf("%lld", &var1);
    scanf("%lld", &var2);
    sum = var1 + var2;


	printf("%lld", sum);	
	return 0;
}
