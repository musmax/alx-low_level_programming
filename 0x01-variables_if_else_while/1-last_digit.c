#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Returns : Always 0 (success/correct)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 5)
{
printf("%d Last digit of", n  "is  and is greater than 5\n");
}
else if (n == 0)
{
printf("%d Last digit of n is zero\n", n);
}
else 
{
printf("%d Last digit of n and is less than 6 and not 0\n", n);
}
return (0);
}
