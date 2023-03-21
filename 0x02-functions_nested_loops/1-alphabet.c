#include main.h

/*
 * print_alphabet - print alphabets
 * Return:returns nothing
 */
void print_alphabet(void)
{
	char ch = 'a';

	for(ch='a';ch <= 'z'; ch++)
	{
		_putchar(ch);
		ch++;

	}
	_putchar('\n');

}
