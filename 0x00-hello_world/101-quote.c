#include <unistd.h>
#include <stdlib.h>

/**
 * main - the entry point
 * Return: is 1 at the end of compiling
 */
int main(void)
{
  write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
  return (1);
}
