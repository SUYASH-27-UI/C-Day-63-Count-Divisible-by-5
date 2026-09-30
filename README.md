# C-Day-63-Count-Divisible-by-5
# C Day 63 - Count Numbers Divisible by 5

This program takes multiple numbers from the user and counts how many numbers are divisible by 5.

## Example

Input:

```text id="n9b2ke"
10
13
25
18
40
27
```

Output:

```text id="d0fz9k"
Numbers divisible by 5 = 3
```

## Concepts Used

* `for` loop
* `if` condition
* Modulus operator `%`
* Increment operator `++`
* User input using `scanf()`
* Counting

## How It Works

1. The user enters how many numbers they want to check.
2. The program takes each number using a `for` loop.
3. `number % 5 == 0` checks whether the number is divisible by 5.
4. If the condition is true, `count` is increased by 1.
5. After checking all numbers, the total count is displayed.

## C Code

```c id="t0m4av"
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
```

## Output

```text id="6h2w8s"
Enter how many numbers: 6
Enter number 1: 10
Enter number 2: 13
Enter number 3: 25
Enter number 4: 18
Enter number 5: 40
Enter number 6: 27

Numbers divisible by 5 = 3
```

## Goal

The goal of this project is to practice loops, conditions, the modulus operator, and counting numbers that satisfy a particular condition.
