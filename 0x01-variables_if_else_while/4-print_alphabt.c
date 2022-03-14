#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * this program prints all letter without q and e
 * Return: always 0(success/correct)
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha == 101 || alpha == 113)
{
continue;
}
putchar(alpha);
}
putchar('\n');
return (0);
}
