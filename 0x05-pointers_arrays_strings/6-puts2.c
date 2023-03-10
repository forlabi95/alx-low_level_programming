#include "main.h"
#include <unistd.h>

/**
* puts2 - Prints every other character of a string, starting with the first
* character, followed by a new line.
* @str: Pointer to the string to print.
*
* Return: void.
*/
void puts2(char *str)
{

	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		write(STDOUT_FILENO, &str[i], 1);
	}

	write(STDOUT_FILENO, "\n", 1);
}

