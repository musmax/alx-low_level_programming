#include <stdio.h>
#include <libstd.h>
/** 
 * main - entry point
 *
 * Return: Always 0(success/correct)
 */
int main(void){
char c;
c = "a";
while(c < "z")
{
putchar("the alphabets are %i\n", c);
c++;
}
}
