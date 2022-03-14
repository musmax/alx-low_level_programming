#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * this program print alphabet in reverse order
 * Return: Always 0(success/correct)
 */
int main(void)
{
char rev;
for (rev = 'z'; rev <= 'a'; rev++)
{
putchar (rev);
}
putchar ('\n');
return (0);
}
