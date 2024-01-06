#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	int index_dest, src_dest;
	for (index_dest = 0; *(dest + index_dest) != '\0'; index_dest++)
		;
	for (src_dest = 0; *(src + src_dest) != '\0'; src_dest++)
	{
		index_dest++;
		*(dest + index_dest) = *(src + src_dest);
	}
	*(dest + src_dest) = '\0';
	putchar('\n');
	return (dest);
}

