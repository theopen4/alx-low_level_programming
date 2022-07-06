#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */

int _putchar(char c)
{

return (write(1, &c, 1));
}

int main(void)
{
char d = 'a';
int g = _putchar(d);


return (0);
}
