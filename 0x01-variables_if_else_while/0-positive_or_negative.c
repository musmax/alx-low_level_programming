#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *   main - prints the phrase "n is positive if >0, n is negative if <0 then n is zero if n==0"
 *   Return: 0 if existed properly, non-zero otherwise
 */
/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if(n > 0){
				printf(n, "is positive");
				}
				else if(n == 0){
				printf(n, "is zero");
				}
				else{
				printf(n, "is negative"}
				
				}
				return (0);
					
}
