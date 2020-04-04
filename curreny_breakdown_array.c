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
    int demonition[8] = {2000, 500, 200, 100, 50, 10, 5, 1};
    int demonitions = sizeof(demonition) / sizeof(demonition[0]);
    for (int i = 0; i <= demonitions; i++)
    {
        amount = withdraw(demonition[i], amount);
    }
}

int main(void)
{
    test_withdraw();
    return 0;
};