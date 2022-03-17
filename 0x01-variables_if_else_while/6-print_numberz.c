#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * this program use char to print 0-9
 *Return: Always 0(success/correct)
 */
int main(void)
{int i;
for (i = 48; i <= 57; i++)
{
putchar (i);
}
putchar ('\n');
return (0);
}
