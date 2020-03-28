#include <stdio.h>

int getIntegerFromUser(void);

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);

void is_even_main(void);
void is_odd_main(void);
void square_main(void);
void cube_main(void);

int getIntegerFromUser(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

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

void is_even_main(void)
{
    printf("\nisEven\n----\n");
    int num = getIntegerFromUser();
    printf("%d is %s\n", num, is_even(num) ? "even" : "not even" );
}

void is_odd_main(void)
{
    printf("\nisOdd\n----\n");
    int num = getIntegerFromUser();
    printf("%d is %s\n", num, is_odd(num) ? "odd" : "not odd" );
}

void square_main(void)
{
    printf("\nsquare\n----\n");
    int num = getIntegerFromUser();
    printf("Square of %d is %d\n", num, square(num));
}

void cube_main(void)
{
    printf("\ncube\n----\n");
    int num = getIntegerFromUser();
    printf("Cube of %d is %d\n", num, num * square(num));
}

int main(void)
{
    is_even_main();
    is_odd_main();
    square_main();
    cube_main();
    return 0;
}