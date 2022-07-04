#include <stdio.h>
#include <stdlib.h>

int sum(int *numbers, int numbersCount)
{
    if (numbersCount > 2)
    {
        int i;
        int sum = 0;
        int j;
        int temp;
        int flag = 0;
        for (i = 0; i < numbersCount; i++)
        {
            for (j = 0; j < numbersCount - 1 - i; j++)
            {
                if (numbers[j] > numbers[j + 1])
                {
                    temp = numbers[j + 1];
                    numbers[j + 1] = numbers[j];
                    numbers[j] = temp;
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        for (int k = 1; k <= numbersCount - 2; k++)
        {
            sum += numbers[k];
        }
        return sum;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int test[5] = {6, 2, 1, 8, 10};
    printf("Odpowiedz: %d", sum(test, 5));
    return 0;
}
