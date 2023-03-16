#include <stdio.h>
/**
 * main -a  prints the size of various types on the computer it is compiled
 * Return:0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long d;
float f;
printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of a int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
