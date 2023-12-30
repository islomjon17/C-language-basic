// #include <stdio.h>

// int main() {
//     int x = 6;

//     // &&
//     printf("(x < 5 && x < 10): %d\n", (x < 5 && x < 10)); // Output: (x < 5 && x < 10): 0 (False)

//     // ||
//     printf("(x < 5 || x < 4): %d\n", (x < 5 || x < 4)); // Output: (x < 5 || x < 4): 1 (True)

//     // !
//     printf("!(x < 5 && x < 10): %d\n", !(x < 5 && x < 10)); // Output: !(x < 5 && x < 10): 1 (True)

//     return 0;
// }
#include <stdio.h>

long long factorial(int num)
{
    long long result = 1;
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return -1;
    }
    else if (num == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= num; ++i)
        {
            result *= i;
        }
        return result;
    }
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    long long fact = factorial(num);
    if (fact != -1)
    {
        printf("The factorial of %d is %lld\n", num, fact);
    }
    return 0;
}
