#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int sum = 0;

  if (argc < 1)
    {
    printf("0");
    }
  for (i = 1; i < argc; i++)
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
