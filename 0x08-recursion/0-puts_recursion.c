#inclide "main.h"

/**
 * _puts_recursion - function prints a string followed by a new line
 * @s: points to string
 *
 * return: void
 */
void _puts_recursion(char *s)

{
	if (*s == "\0") /*base case*/

{
		_putchar('\n');
		return;
}
	_putchar(*s);
	_puts_recursion(s + 1);
}
