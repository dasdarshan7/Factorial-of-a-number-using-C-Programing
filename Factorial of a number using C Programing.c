// Factorial of a number using C Programing
#include <stdio.h>
#include <conio.h>
int main() 
{
    int n, i;
    unsigned long long f = 1;
    printf("Enter an Number: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else 
	{
        for (i = 1; i <= n; ++i) 
		{
            f = f * i;
        }
        printf("Factorial of %d = %llu", n, f);
    }
    getch();
    return 0;
}
