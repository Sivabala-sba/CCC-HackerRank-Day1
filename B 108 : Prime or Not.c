#include <stdio.h>

int main()
{
    int i,num;
    scanf("%d",&num);
    int isPrime= 1;
    if(num < 2){
        isPrime = 0;
    }
    else{

        for(i=2; i < num; i++)
        {
            if(num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        printf("yes");
    else
        printf("no");
 
    return 0;
}
