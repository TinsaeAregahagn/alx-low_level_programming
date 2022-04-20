#include <stdio.h>
/**
 * main - causes an infinite loop
 *
 * Return: 0
 */
int main(void)
{
int n = 98;
int *p = &n;

printf(*p);
return (0);
}
