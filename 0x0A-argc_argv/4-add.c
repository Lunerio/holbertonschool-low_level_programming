#include <stdio.h>
#include <stdlib.h>

/**
 * main - tests function that prints if integer is positive or negative
 * @argc: argument counter
 * @argv: arguemtn array
 * Return: 0
 */

int main(int argc, char *argv[])
{
  int i;
  int sum = 0;

  if (argc < 2)
    {
    printf("0");
    }
  for (i = 1; i <= argc; i++)
    {
      if (atoi(argv[i]) == 0)
	{
	  printf("Error\n");
	  return (1);
	}
      sum = sum + atoi(argv[i]);
    }
  printf("%d\n", sum);
  return (0);
}
