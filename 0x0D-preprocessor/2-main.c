#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of file it was compiled from
 * Return: normal status
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
