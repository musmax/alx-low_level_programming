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
<<<<<<< HEAD

while (i < 10)
{
putchar(i); /*we omitted i++ is this loop*/

}

=======
/*
*while (i < 10)
*{
*putchar(i);
*}
*/
>>>>>>> origin
printf("Infinite loop avoided! \\o/\n");

return (0);
}
