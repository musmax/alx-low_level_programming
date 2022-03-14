#include <stdio.h>
#include <stdlib.h>
/** 
 * main - entry point
 *
 * Return: Always 0(success/correct)
 */
int main(void){
char c;
c = 'a';
while(c <= 'z'){
putchar("value %d\n");
putchar(c);
c = c+1;
}
