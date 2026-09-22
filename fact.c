#include <stdio.h>

void factorial()
{
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if( n < 0 )
         printf("Error! Factorial of negative number doesnot exist.");
    else 
    {
        for ( i=1; i<=n; ++i )
	{
           fact *= i;
	}
    }
     printf("Factorial of %d = %5u", n, fact);

    // return 0;
}
