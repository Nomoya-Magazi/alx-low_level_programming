#include <stdio.h>

/**
 * main - causes an infinite loop
<<<<<<< HEAD
 * Returnn: 0
 */
=======
 * Return: 0
 **/
>>>>>>> a7d6fb09443aad8dbcc787ec5d565126534fa126

int main(void)
{
	int i;

<<<<<<< HEAD
	 printf("Infinite loop incoming :(\n");

	 i = 0;

		 while (i < 10)
		 {
			 putchar(i);
		 }

	 printf("Infinite loop avoided! \\o/\n");

	 return (0);
=======
	printf("Infinite loop incoming :(\n");

	/*
	 * i = 0;
	 * while (i < 10)
	 * {
	 * putchar(i);
	 * }
	 **/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
>>>>>>> a7d6fb09443aad8dbcc787ec5d565126534fa126
}
