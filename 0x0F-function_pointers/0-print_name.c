#include <stdlib.h>
#include "function_pointers.h"


/**
 * print_name - will print a name.
 * @name: The name to be printed
 * @f: The pointer to printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!!name || !f)
		return;
	f(name);
}
