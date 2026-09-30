#include <stdio.h>

int main()
{
    int n, number;
    int count = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 5 == 0)
        {
            count++;
        }
    }

    printf("Numbers divisible by 5 = %d", count);

    return 0;
}
