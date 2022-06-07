#include "0-putchar.c"

/** 
 * print_alphabet - function that prints the alphabet in lowercase
 * can only use _putchar twice 
 * Return: nothing
 */
void print_alphabet(void)
{ 
	int 1 = 'a';
	while (1 <= 'z')
	{
		_putchar(1);
		1 += 1;
	}
	_putchar(10);
}
