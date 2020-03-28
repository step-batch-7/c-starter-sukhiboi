#include <stdio.h>

int factorial(int);
int fibonacci(int);
unsigned char is_even(int);
unsigned char is_odd(int);
int oddNumberSeries(int);
int evenNumberSeries(int);
int multiplication_table(int, int);
int sum_of_n_numbers(int);
int product_of_n_numbers(int);

void test_factorial(void);
void test_fibonacci(void);
void test_oddNumberSeries(void);
void test_evenNumberSeries(void);
void test_multiplication_table(void);
void test_product_of_n_numbers(void);

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

int multiplication_table(int multiplicand, int limit)
{
    int multiplier = 1;
    int product = multiplicand;
    printf("\n");
    while (multiplier <= limit)
    {
        product = multiplicand * multiplier;
        printf("%d x %d = %d\n", multiplicand, multiplier, product);
        multiplier++;
    }
    return product;
}

int sum_of_n_numbers(int count)
{
    int counted = 0;
    int sum = 0;
    while (counted < count)
    {
        printf("Enter number %d: ", counted + 1);
        int num;
        scanf("%d", &num);
        sum += num;
        counted++;
    }
    return sum;
}

int product_of_n_numbers(int count)
{
    int counted = 0;
    int product = 1;
    while (counted < count)
    {
        printf("Enter number %d: ", counted + 1);
        int num;
        scanf("%d", &num);
        product *= num;
        counted++;
    }
    return product;
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

void test_multiplication_table(void)
{
    int multiplicand = 12, limit = 10;
    printf("Table of %d upto %d terms is as follows ", multiplicand, limit);
    multiplication_table(multiplicand, limit);
}

void test_sum_of_n_numbers(void)
{
    int count = 3;
    printf("Enter %d number to get the sum of them\n", count);
    printf("SUM: %d\n", sum_of_n_numbers(count));
}

void test_product_of_n_numbers(void)
{
    int count = 3;
    printf("Enter %d number to get the product of them\n", count);
    printf("PRODUCT: %d", product_of_n_numbers(count));
}

int main(void)
{
    test_factorial();
    test_fibonacci();
    test_oddNumberSeries();
    test_evenNumberSeries();
    test_multiplication_table();
    test_sum_of_n_numbers();
    test_product_of_n_numbers();
    return 0;
};