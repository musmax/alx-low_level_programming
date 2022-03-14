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
for(alpha = 'a'; alpha <= 'z'; alpha++)
{
if(alpha = 'q' && alpha = 'e'){
break;
}
putchar(alpha);
}
putchar('\n');
}
