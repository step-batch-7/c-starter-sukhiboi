#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);

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

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is %s\n",num,  is_even(num)?"even":"not even");
    printf("%d is %s\n",num,  is_odd(num)?"odd":"not odd");
    printf("Square of %d is %d\n",num, square(num));
    printf("Cube of %d is %d\n",num, cube(num));
    return 0;
}