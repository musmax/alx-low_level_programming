#include <stdio.h>
#include "header.h"

/** main entry
 * this program checks for character
 * Return 0: (success/correct)
 *
 */
int int_isupper(int c)
{
c = "C";
if(c > 65 && c <= 95)
{
printf("%d c is upper",c);
return 1;
}
else
{
return 0;
}
}
