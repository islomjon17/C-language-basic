#include <stdio.h>

int main()
{
    returnType functionName(parameter1, parameter2, parameter3)
    {
        // code to be executed
    }

    void myFunction(char name[])
    {
        printf("Hello %s\n", name);
    }

    int main()
    {
        myFunction("Liam");
        myFunction("Jenny");
        myFunction("Anja");
        return 0;
    }

    void myFunction(char name[], int age)
    {
        printf("Hello %s. You are %d years old.\n", name, age);
    }

    int main()
    {
        myFunction("Liam", 3);
        myFunction("Jenny", 14);
        myFunction("Anja", 30);
        return 0;
    }

    void myFunction(int myNumbers[5])
    {
        for (int i = 0; i < 5; i++)
        {
            printf("%d\n", myNumbers[i]);
        }
    }

    int main()
    {
        int myNumbers[5] = {10, 20, 30, 40, 50};
        myFunction(myNumbers);
        return 0;

        int myFunction(int x)
        {
            return 5 + x;
        }

        int main()
        {
            printf("Result is: %d", myFunction(3));
            return 0;
        }
    }

    int myFunction(int x, int y)
    {
        return x + y;
    }

    int main()
    {
        printf("Result is: %d", myFunction(5, 3));
        return 0;
    }

    int myFunction(int x, int y)
    {
        return x + y;
    }

    int main()
    {
        int result = myFunction(5, 3);
        printf("Result is = %d", result);
        return 0;
    }

    // Function to convert Fahrenheit to Celsius
    float toCelsius(float fahrenheit)
    {
        return (5.0 / 9.0) * (fahrenheit - 32.0);
    }

    int main()
    {
        // Set a fahrenheit value
        float f_value = 98.8;

        // Call the function with the fahrenheit value
        float result = toCelsius(f_value);

        // Print the fahrenheit value
        printf("Fahrenheit: %.2f\n", f_value);

        // Print the result
        printf("Convert Fahrenheit to Celsius: %.2f\n", result);

        return 0;
    }

    return 0;
}