#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// This is an awesome function and useful if you need to clear the input buffer
void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main(void)
{
	int i = 0;
	int numberFibonacciNumbers = 0;
	int fibNumMinus2 = 0;
	int fibNumMinus1 = 1;
	int currentFibNum = 0;

	printf("How many Fibonacci numbers would you like to print? \n");
	scanf("%d", &numberFibonacciNumbers);
    clean_stdin();

	printf("******************\n");
	printf("FIBONACCI SEQUENCE\n");
	printf("******************\n");

	for (i = 0; i < numberFibonacciNumbers; i++)
	{
        // Check if we are on first or second itteration, if so... print statics. 
        if (i == 0)
        {
            printf("%d\n", fibNumMinus2);
            continue;
        }
        else if (i == 1)
        {
            printf("%d\n", fibNumMinus1);
            continue;
        }
        // If not, calcuate next fib number
        else
        {
            currentFibNum = fibNumMinus1 + fibNumMinus2;
            printf("%d\n", currentFibNum);
            fibNumMinus2 = fibNumMinus1;
            fibNumMinus1 = currentFibNum;
        }
	}

	getchar(); getchar();
	return 0;
}
