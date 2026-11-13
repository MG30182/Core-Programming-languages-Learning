#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Enter your first number: ");
    scanf("%f", &num1);
    printf("Enter your second number: ");
    scanf("%f", &num2);
    if (num1>num2)
    {
        printf("%.2f is the maximum value between %.2f and %.2f. \nBy a difference of %.2f\n", num1, num1, num2, num1-num2);
    }
    else if (num2>num1)
    {
        printf("%.2f is the maximum value between %.2f and %.2f. \nBy a difference of %.2f\n", num2, num1, num2, num2-num1);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }
    return 0;
}