#include <stdio.h>

int factorial(int);

void test_factorial(void);

int factorial(int num) 
{
    int fact = 1;
    while (num > 1)
    {
        fact *= num;
        num--;
    }
    return fact;
}

void test_factorial(void) 
{
    int num = 10;
    printf("Factorial of %d is %d", num, factorial(num));
}

int main(void)
{
    test_factorial();
    return 0;
};