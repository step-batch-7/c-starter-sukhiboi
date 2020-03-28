#include <stdio.h>
#include <math.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
int gcd(int, int);
int lcm(int, int);
float simple_intrest(float, float, int);
float compound_intrest(float, float, int, int);

void test_is_even(void);
void test_is_odd(void);
void test_square(void);
void test_cube(void);
void test_gcd(void);
void test_lcm(void);
void test_simple_interest(void);
void test_compound_intrest(void);

unsigned char is_even(int num)
{
    return num % 2 == 0;
}

unsigned char is_odd(int num)
{
    return !is_even(num);
}

int square(int num)
{
    return num * num;
}

int cube(int num)
{
    return square(num) * num;
}

int gcd(int num1, int num2)
{
    int greatest_common_divisor;
    for (int divisor = 1; divisor <= num1 && divisor <= num2; divisor++)
    {
        if (num1 % divisor == 0 && num2 % divisor == 0)
        {
            greatest_common_divisor = divisor;
        }
    }
    return greatest_common_divisor;
}

int lcm(int num1, int num2)
{
    return num1 * num2 / gcd(num1, num2);
}

float simple_intrest(float principle, float rate, int time)
{
    return  principle * rate / 100 * time;
}

float compound_intrest(float principle, float rate, int frequency, int time)
{
    float intrest = rate / 100;
    float amount = principle * pow((1 + (intrest / frequency)), time * frequency);
    return amount - principle;
}

void test_is_even(void)
{
    int num = 24;
    printf("%d is %s\n", num, is_even(num) ? "even" : "not even");
}

void test_is_odd(void)
{
    int num = 43;
    printf("%d is %s\n", num, is_odd(num) ? "odd" : "not odd");
}

void test_square(void)
{
    int num = 12;
    printf("Square of %d is %d\n", num, square(num));
}

void test_cube(void)
{
    int num = 5;
    printf("Square of %d is %d\n", num, cube(num));
}

void test_gcd(void)
{
    int num1 = 24, num2 = 54;
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
}

void test_lcm(void)
{
    int num1 = 24, num2 = 54;
    printf("GCD of %d and %d is %d\n", num1, num2, lcm(num1, num2));
}

void test_simple_interest(void)
{
    float principle = 1500, rate = 4.3;
    int time = 6;
    float si = simple_intrest(principle, rate, time);
    printf("Simple Intrest when principle: %f, rate: %f, time: %d is %f\n", principle, rate, time, si);
}

void test_compound_intrest(void)
{
    float principle = 1500, rate = 4.3;
    int time = 6, frequency = 4;
    float ci = compound_intrest(principle, rate, frequency, time);
    printf("Compound Intrest when principle: %f, rate: %f,  frequency: %d, time: %d is %f\n", principle, rate, frequency, time, ci);
}

int main(void)
{
    test_is_even();
    test_is_odd();
    test_square();
    test_cube();
    test_gcd();
    test_lcm();
    test_simple_interest();
    test_compound_intrest();
    return 0;
}