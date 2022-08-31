#include <stdio.h>

int main() {
   int num = 0;  
    int i;
    int Count = 0;
    printf("Enter a number:\n"); 
    scanf("%d", &num);  
    if(num<1)    // Any num to be checked prime should be greater than 1.
    {
        printf("To check a prime number,the number should be greater than 1");
        printf("\nPlease enter a valid number\n");
        return 0;
    }
    
    for(i = 1; i <= num; i++)
    
    {
        if (num % i==0)  //prime number is only divisible only by 1 and itself
        {
            Count = Count + 1; //since i is initialized as 1, we are taking default count value = 1.
        }
    }
    // if only it is divisible by itself count becomes 2, and for all other factors count will be greater than 2.
    if(Count==2)
    printf(" %d is a Prime Number\n",num);
    else
    printf(" %d is not a Prime Number\n",num); 
}