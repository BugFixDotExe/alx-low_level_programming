
/**
 * main - entry point of the program
 * Return: zero
 */

#include <sys/types.h>
#include <string.h>
#include <unistd.h>
int main(void)
{
	char buffer[1024];

	strcpy(buffer, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n")
		;
	write(2, buffer, strlen(buffer));

	return (0);

}
