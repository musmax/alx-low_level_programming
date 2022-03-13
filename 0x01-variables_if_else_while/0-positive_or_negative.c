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
				printf(n, " 0-positive");
				}
				else if(n == 0){
				printf(n, "is zero");
				}
				else{
				printf(n, "0-negative"}
				
				}
				return (0);
					
}
