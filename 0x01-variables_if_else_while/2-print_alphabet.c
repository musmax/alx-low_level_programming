#include <stdio.h>
#include <stdlib.>
/** 
 * main - entry point
 *
 * Return: Always 0(success/correct)
 */
int main(void){
char c;
c = 'a';
while(c <= 'z'){
putchar("value %d char %c\n", c, c);
c = c+1;
}
