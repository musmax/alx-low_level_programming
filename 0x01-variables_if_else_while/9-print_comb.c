#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * this program reverses 0-9 forward and backward
 * Return: Always 0(success/correct)
 */
int main(void)
{
int go;
int come;
for (go = 48; go <= 57; go++)
{
putchar (go);
if (go == 57)
{break;
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
