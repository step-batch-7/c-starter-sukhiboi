#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
int gcd(int, int);
int lcm(int, int);

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
    int gcd;
    for (int divisor = 1; divisor <= num1 && divisor <= num2; divisor++)
    {
        if (num1 % divisor == 0 && num2 % divisor == 0)
        {
            gcd = divisor;
        }
    }
    return gcd;
}

int lcm(int num1, int num2)
{
    return num1 * num2 / gcd(num1, num2);
}

int main(void)
{
    int num1 = 24, num2 = 54;
    printf("%d is %s\n", num1, is_even(num1) ? "even" : "not even");
    printf("%d is %s\n", num1, is_odd(num1) ? "odd" : "not odd");
    printf("Square of %d is %d\n", num1, square(num1));
    printf("Cube of %d is %d\n", num1, cube(num1));
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
    return 0;
}