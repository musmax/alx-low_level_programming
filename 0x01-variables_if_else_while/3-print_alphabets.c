#include <stdio.h>
#include <stdlib.h>
/** main - entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
char lower;
char upper;
for (lower='a'; lower < 'z'; lower++){
putchar(lower);
} 
for (upper='A'; upper < 'Z'; upper++){
putchar(upper);
}
putchar('\n');
return (0);
}
