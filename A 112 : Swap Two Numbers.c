#include <stdio.h>

int main()
{
	int var1 = 10, var2  = 5;
	int temp;
	//swap values of var1 and var2 here.
    temp = var1;
    var1 = var2;
    var2 = temp;
	

	printf("%d %d", var1, var2);
	return 0;
}
