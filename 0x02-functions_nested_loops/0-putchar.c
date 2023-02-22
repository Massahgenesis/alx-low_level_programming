#include "main.h"

/**
* main - A c program that prints a line with _putchar function
* Return: 0 (success)
*/

int main(void) 
{
char school[8] = "_putchar";
int i;
i = 0;
while (i <= 8) {
_putchar(school[i]);
i++;
}
_putchar(10);
return (0);
}

