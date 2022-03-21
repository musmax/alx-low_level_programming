#include <stdio.h>
/**
 * main entry
 * this program is meant to Write a function that takes a pointer to an int as parameter and updates the value it points to to 98
 * return 0: (success/correct)
 */

void reset_to_98(int *n)
{
int n = 98;
int *n = &n;

*n = 98;
}
