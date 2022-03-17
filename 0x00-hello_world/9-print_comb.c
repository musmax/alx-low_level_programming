#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * this program is meant to forward and reverse 0-9 digits
 * Return: Always 0(success/correct)
 */
int main(void) 
{
int go;
int come;
for (go = 0; go < 10; go++)
{
putchar (go);
}
putchar ('\n');
for (come = 10; come > 0; come--)
{
putchar(come);
}
putchar ('\n');
return (0);
}
