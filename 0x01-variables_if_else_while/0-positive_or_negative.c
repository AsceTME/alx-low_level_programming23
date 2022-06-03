#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-a random number to the n variable each time 
 * if the number is greater than 0=postive and if the number is 0=is zero 
 * if the numbeer is less than 0= is negative and folowed by the new line 
 * Return:0
 */
int main(void)
{
int n;
 srand(time(0))
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n)	
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}

