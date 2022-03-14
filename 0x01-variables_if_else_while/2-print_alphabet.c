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
printf("value %d char %c\n", c, c);
c = c+1;
}
