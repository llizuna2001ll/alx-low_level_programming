#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *Description: print value of n satus; zero, positive or negative
 *Return: Always 0 (Success)
*/
int main() {
	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n>0)
		printf("%d is positive",n);
    else if(n<0)
		printf("%d is negative",n);
    else
		printf("0 is zero");
			
    return 0;
}
