#ifndef PROTECT
#define PROTECT
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct chanchullo - calling for each element and compare
 * @bomba: type of data received from arguments
 * @funk: pointer to functions to execute
 * Description: This takes the char from arguments
 */
typedef struct chanchullo
{
	char *bomba;
	void(*funk)();
}rebelion;
#endif
