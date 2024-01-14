#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n)
{
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main()
{
    // Example usage of the recursive factorial function
    int num = 5;
    printf("Factorial of %d is: %d\n", num, factorial(num));

    return 0;
}

////////////////////////////////////

int sum(int k);

int main()
{
    int result = sum(10);
    printf("%d", result);
    return 0;
}

int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}