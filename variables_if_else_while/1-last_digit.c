#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * This program will assign a random number to the variable n each time it is executed
 */
int main(void)
{
int n;
char string[] = "Last digit of";
char is[] = "is";
char greater[] = "and is greater than 5";
char zero[] = "and is 0";
char less[] = "and is less than 6 and not 0";
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
printf("%s %d %s %d %s\n", string, n, is, n % 10, greater);
else if (n == 0)
printf("%s %d %s %d %s\n", string, n, is, n % 10, zero);
else
printf("%s %d %s %d %s\n", string, n, is, n % 10, less);
return (0);
}
