#include <stdio.h>

int main(void)
{
	int i;

	i = 0;
	while (i < 100)
	{
		i++;
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
		printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
