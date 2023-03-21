#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char i;
	for (i = 'a' ; i <= 'z' ; i++)
		purchar(i);
	purchar('\n');
	return (0);
}
