#include <stdio.h>

/**
 * main -> this function prints its name
 * @argc: argc parameter
 * @argv: an array of acommand
 * Return: Always 0 (success)
 */
int main(int argc _attribute_(unused), char *argv[])

{
	printf("%s\n", *argv[]);
	return (0);
}
