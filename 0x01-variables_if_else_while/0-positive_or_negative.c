#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
/* betty style doc for function main goes there */
/**
 *   main - prints the phrase "n is 0-positive if n > 0, n is 0-negative if n<0 and n is zerp if n == 0
 *   Return: 0 if existed properly, non-zero otherwise
 */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if(n > 0){
				printf(n,"if the number is greater than 0: %d\n", "is positive");
				}
				else if(n == 0){
				printf(n, "if the number is 0: %d\n", "is zero");
				}
				else{
				printf(n, "if the number is less than 0: %d\n", "is negative");
				}
				return (0);
					
}
