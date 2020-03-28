#include <stdio.h>

int factorial(int);
int fibonacci(int);

void test_factorial(void);
void test_fibonacci(void);

int factorial(int num)
{
    int fact = 1;
    int limit = num;
    while (limit > 1)
    {
        fact *= limit;
        limit--;
    }
    return fact;
}

int fibonacci(int termCount)
{
    int count = 0;
    int first_element = -1;
    int second_element = 1;
    int current_element;
    while (count < termCount)
    {
        current_element = first_element + second_element;
        first_element = second_element;
        second_element = current_element;
        printf("%d ", current_element);
        count++;
    }
    return current_element;
}

//tests

void test_factorial(void)
{
    int num = 10;
    printf("Factorial of %d is %d\n", num, factorial(num));
}

void test_fibonacci(void)
{
    int termCount = 10;
    printf("First %d terms of fibonacci series are ", termCount);
    fibonacci(termCount);
}

int main(void)
{
    test_factorial();
    test_fibonacci();
    return 0;
};