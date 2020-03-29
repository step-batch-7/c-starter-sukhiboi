#include <stdio.h>

int withdraw(int, int);
void test_withdraw(void);

int withdraw(int demonition, int amount)
{
    int noteCount = 0;
    int money = amount;
    while (money >= demonition)
    {
        money -= demonition;
        noteCount++;
    }
    printf("%d x Rs %d\n", noteCount, demonition);
    return money;
}

void test_withdraw(void)
{
    int amount = 1234;
    printf("AMOUNT: %d\n-----\n", amount);
    amount = withdraw(2000, amount);
    amount = withdraw(500, amount);
    amount = withdraw(200, amount);
    amount = withdraw(100, amount);
    amount = withdraw(50, amount);
    amount = withdraw(10, amount);
    amount = withdraw(5, amount);
    amount = withdraw(1, amount);
}

int main(void)
{
    test_withdraw();
    return 0;
};