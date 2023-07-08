#include "main.h"
#include <stdio.h>

/**
*_puts - function to print a string
*@str: string to be printed
*
*Return: void
*/
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}

putchar('\n');
}

/**
*main - Entry point
*
*Return: 0 (Success)
*/
int main(void)
{
_puts("\"Programming is like building a multilingual puzzle");
return (0);
}
