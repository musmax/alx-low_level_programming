#include <stdio.h>

/**
 * * main - causes an infinite loop
 * * Return: 0
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 10)
{
putchar(i);
/* we omited i++ in this line*/									        }

printf("Infinite loop avoided! \\o/\n");
/* we omited the i and comma*/

return (0);
}
