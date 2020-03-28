#include <stdio.h>

int factorial(int);
int fibonacci(int);
unsigned char is_even(int);
unsigned char is_odd(int);
int oddNumberSeries(int);
int evenNumberSeries(int);

void test_factorial(void);
void test_fibonacci(void);
void test_oddNumberSeries(void);
void test_evenNumberSeries(void);

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

unsigned char is_even(int num)
{
    return num % 2 == 0;
}

unsigned char is_odd(int num)
{
    return !is_even(num);
}

int oddNumberSeries(int limit)
{
    int current_element;
    int count = 1;
    while (count < limit)
    {
        current_element = count;
        if (is_odd(current_element))
        {
            printf("%d ", current_element);
        }
        count++;
    }
    return current_element;
}

int evenNumberSeries(int limit)
{
    int current_element;
    int count = 1;
    while (count < limit)
    {
        current_element = count;
        if (is_even(current_element))
        {
            printf("%d ", current_element);
        }
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
    printf("\n");
}

void test_oddNumberSeries(void)
{
    int limit = 10;
    printf("Odd terms between 1 and %d are ", limit);
    oddNumberSeries(limit);
    printf("\n");
}

void test_evenNumberSeries(void)
{
    int limit = 10;
    printf("Even terms between 1 and %d are ", limit);
    evenNumberSeries(limit);
    printf("\n");
}

int main(void)
{
    test_factorial();
    test_fibonacci();
    test_oddNumberSeries();
    test_evenNumberSeries();
    return 0;
};