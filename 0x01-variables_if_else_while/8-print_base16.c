#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * this program prints all number in base 16
 * Return: Always 0 (success/correct)
 */
int main(void)
{
int i = 16000;
if (i % 16 == 0)
{
putchar (i);
}
putchar ('\n');
return (0);
}
