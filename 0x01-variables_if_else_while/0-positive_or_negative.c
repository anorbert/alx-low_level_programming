#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int a;
srand(time(0));
a = rand() - RAND_MAX / 2;
/* if number is greater than 0 */
if (a > 0)
{
printf("%d is positive\n", a);
}
if (a < 0)
{
printf("%d is negative\n", a);
}
if (a == 0)
{
printf("%d is zero\n", a);
}
return (0);
}
