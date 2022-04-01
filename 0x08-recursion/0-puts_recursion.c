#include "main.h"

/**
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return: No.
 */
void _puts_recursion(char *s)
{

int i;
for (i = 0; *s != '\0'; i++)
{
_putchar(*s);
}
_putchar('\n');
}
