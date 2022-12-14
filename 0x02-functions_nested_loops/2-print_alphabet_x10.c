#include "main.h"

/**      

* print_alphabet_x10 - in lowercase
*Return:  0 (success)

*/

int main(void)
{
	char i;
	int x;

	for (i = '0'; i <= '9'; i++)
	{	
		for (x = 'a'; x <= 'z'; x++)
			 _putchar(x);
		 _putchar('\n');
	}                                          
	 return (0);
}
