#include <stdio.h>
int main()
{
  /*
  do {
    A condition is given and the value is passed directly to while and if while returns True then to do
    If While returns False, the Loop is closed and the result is returned
  }

  */

  // Example 1
  // int i = 0;
  // do
  // {
  //   printf("Learn while\n");
  //   i++;
  // } while (i < 10);
  // return 0;

  // Example 2


    int N = 5, i = 1;

    do
    {
      printf("%d x %d = %d\n", N, i, N * i);
    } while (i++ < 10);

  /// Example 3
  // int number, sum = 0;
  // do
  // {
  //   printf("Enter a number: ");
  //   scanf("%d", &number);
  //   sum += number;
  // } while (number != 0);

  // printf("Sum = %d", sum);

  return 0;
}