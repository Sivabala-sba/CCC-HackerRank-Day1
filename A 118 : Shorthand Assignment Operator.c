#include <stdio.h> 

int main()
{
	int A, B;
	//Increment A by B and print the result. Repeat three times.
    scanf("%d", &A);
    scanf("%d", &B);
    printf("%d ", A + B);
    printf("%d ", A + B + B);
    printf("%d", A + B + B + B);
	
	return 0;
}
