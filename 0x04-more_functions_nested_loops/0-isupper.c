#include "main.h"
/**
 *_isupper - checks if letters are uppercase.
 *@c: input.
 *
 *Return: 1 if c is uppercase
 *0 otherwise.
 */
int _isupper(int c)
{
  
for (c = 'a'; c <= 'z'; c++)
{
	if (c != 'A' && c != 'Z')
	{
	
		printf("%c not upper");
			return 0;
	}
	else
	{
	
		printf("%c it is upper");
			return 1;
	}
	
}
}
