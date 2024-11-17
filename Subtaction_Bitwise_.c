#include <stdio.h>
int subtract(int a, int b); //function prototype
int main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int result = subtract(num1, num2); // Calling the subtract function
    printf("The result of subtraction is: %d\n", result);
    return 0;
}
int subtract(int a, int b) //function definiton
{
    return a + (~b + 1); // Adding the two's complement of b
}