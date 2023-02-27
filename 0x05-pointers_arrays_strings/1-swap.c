#include <stdio.h>
#include "main.h"

/**
 *swap_int - Function that swaps the values of two integers
 *@a: An integer
 *@b: An integer
 */

void swap_int(int *a, int *b)
{
int c = 0;
c = *a;
*a = *b;
*b = c;
}
