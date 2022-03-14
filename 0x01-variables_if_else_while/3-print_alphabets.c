#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * this program prints out lower and uppercae alphabets
 * Return: Always 0(success/correct)
 */
int main(void)
{
char lower;
char upper;
for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}
for (upper = 'A'; upper <= 'Z'; upper++)
{
putchar(upper);
}
putchar('\n');
return (0);
}
