#include "main.h"
/* 
 * print_alphabet-all alphabets printed in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
