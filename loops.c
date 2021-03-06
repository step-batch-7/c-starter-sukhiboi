#include <stdio.h>

int factorial(int);
int fibonacci(int);
unsigned char is_even(int);
unsigned char is_odd(int);
int odd_number_series(int);
int even_number_series(int);
int multiplication_table(int, int);
int sum_of_n_numbers(int);
int product_of_n_numbers(int);
int odd_numbers_in_a_range(int, int);
int print_every_nth_term_in_range(int, int, int);
int sum_of_even_number_in_range(int, int);
int odd_number_series_backwards(int);

void test_factorial(void);
void test_fibonacci(void);
void test_odd_number_series(void);
void test_even_number_series(void);
void test_multiplication_table(void);
void test_product_of_n_numbers(void);
void test_odd_numbers_in_a_range(void);
void test_print_every_nth_term_in_range(void);
void test_sum_of_even_number_in_range(void);
void test_odd_number_series_backwards(void);

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

int odd_number_series(int limit)
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

int even_number_series(int limit)
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

int odd_numbers_in_a_range(int start, int last)
{
    int current_element;
    int count = start;
    while (count < last)
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

int print_every_nth_term_in_range(int step, int start, int last)
{
    int current_element;
    int count = start;
    while (count < last)
    {
        current_element = count;
        printf("%d ", current_element);
        count += step;
    }
    return current_element;
}

int sum_of_even_number_in_range(int start, int last)
{
    int sum = 0;
    int count = start;
    while (count < last)
    {
        int current_element = count;
        if (is_even(current_element))
        {
            sum += current_element;
        }
        count++;
    }
    return sum;
}

int odd_number_series_backwards(int limit)
{
    int current_element;
    int count = limit;
    while (count > 1)
    {
        current_element = count;
        if (is_odd(current_element))
        {
            printf("%d ", current_element);
        }
        count--;
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

void test_odd_number_series(void)
{
    int limit = 10;
    printf("Odd terms between 1 and %d are ", limit);
    odd_number_series(limit);
    printf("\n");
}

void test_even_number_series(void)
{
    int limit = 14;
    printf("Even terms between 1 and %d are ", limit);
    even_number_series(limit);
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
    printf("PRODUCT: %d\n", product_of_n_numbers(count));
}

void test_odd_numbers_in_a_range(void)
{
    int start = 5, last = 10;
    printf("Odd terms between %d and %d are ", start, last);
    odd_numbers_in_a_range(start, last);
    printf("\n");
}

void test_print_every_nth_term_in_range(void)
{
    int start = 1, last = 70, step = 7;
    printf("Every %d term between %d and %d is ", step, start, last);
    print_every_nth_term_in_range(step, start, last);
    printf("\n");
}

void test_sum_of_even_number_in_range(void)
{
    int start = 5, last = 14;
    int sum = sum_of_even_number_in_range(start, last);
    printf("Sum of all even numbers between %d and %d is %d\n", start, last, sum);
}

void test_odd_number_series_backwards(void)
{
    int limit = 10;
    printf("Odd terms between 1 and %d, backwards are ", limit);
    odd_number_series_backwards(limit);
}

int main(void)
{
    test_factorial();
    test_fibonacci();
    test_odd_number_series();
    test_even_number_series();
    test_multiplication_table();
    test_sum_of_n_numbers();
    test_product_of_n_numbers();
    test_odd_numbers_in_a_range();
    test_print_every_nth_term_in_range();
    test_sum_of_even_number_in_range();
    test_odd_number_series_backwards();
    return 0;
};