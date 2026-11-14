#include <stdio.h>
#include <math.h> //gives permission to the program to use complex mathamatical functions like fmod(), sqrt(), pow()
int main()
{
    int choice;
    printf("choose your input type:\n");
    printf("1. Integer\n");
    printf("2. float\n");
    printf("enter choice (1 or 2): ");
    scanf("%d", &choice);
    printf("-------------------------\n");
    if (choice == 1)
    {
        int num, div1, div2;
        printf("Enter an integer you want to check the divisiblity for by the two numbers of your choice: ");
        scanf("%d", &num);
        printf("→ Enter the input for your first divisiblity check: ");
        scanf("%d", &div1);
        printf("→ Enter the input for your second divisiblity check: ");
        scanf("%d", &div2);
        printf("-------------------------\n");
        if (div1 == 0 && div2 == 0)
        {
            printf("ERROR: Both divisors cannot be zero. Please restart\n");
        }
        else if (div1 == 0)
        {
            if (num % div2 == 0)
                printf("RESULT: %d is divisible by\n→ %d only.\n→ First divisor is zero.\n", num, div2);
            else
                printf("RESULT: %d is not divisible by\n→ %d.\n→ First divisor is zero.\n", num, div2);
        }
        else if (div2 == 0)
        {
            if (num % div1 == 0)
                printf("RESULT: %d is divisible by\n→ %d only.\n→ Second divisor is zero.\n", num, div1);
            else
                printf("RESULT: %d is not divisible by\n→ %d.\n→ Second divisor is zero.\n", num, div1);
        }
        else if (num % div1 == 0 && num % div2 == 0)
        {
            printf("RESULT: %d is divisible by both\n→ %d\n→ %d.\n", num, div1, div2);
        }
        else if (num % div1 == 0)
        {
            printf("RESULT: %d is divisible by\n→ %d only.\n", num, div1);
        }
        else if (num % div2 == 0)
        {
            printf("RESULT: %d is divisible by\n→ %d only.\n", num, div2);
        }
        else
        {
            printf("RESULT: %d is divisible by\n→ neither %d\n→ nor %d.\n", num, div1, div2);
        }
    }
    else if (choice == 2)
    {
        float num, div1, div2;
        printf("Enter an integer you want to check the divisiblity for by the two numbers of your choice: ");
        scanf("%f", &num);
        printf("Enter the input for your first divisiblity check: ");
        scanf("%f", &div1);
        printf("Enter the input for your second divisiblity check: ");
        scanf("%f", &div2);
        printf("-------------------------\n");
        if (div1 == 0 && div2 == 0)
        {
            printf("ERROR: Both divisors cannot be zero. Please restart\n");
        }
        else if (div1 == 0)
        {
            if (fmod(num, div2) == 0)
                printf("RESULT: %.2f is divisible by\n→ %.2f only.\n→ First divisor is zero.\n", num, div2);
            else
                printf("RESULT: %.2f is not divisible by\n→ %.2f.\n→ First divisor is zero.\n", num, div2);
        }
        else if (div2 == 0)
        {
            if (fmod(num, div1) == 0)
                printf("RESULT: %.2f is divisible by\n→ %.2f only.\n→ Second divisor is zero.\n", num, div1);
            else
                printf("RESULT: %.2f is not divisible by\n→ %.2f.\n→ Second divisor is zero.\n", num, div1);
        }
        else if (fmod(num, div1) == 0 && fmod(num, div2) == 0)
        {
            printf("RESULT: %.2f is divisible by both\n→ %.2f\n→ %.2f.\n", num, div1, div2);
        }
        else if (fmod(num, div1) == 0)
        {
            printf("RESULT: %.2f is divisible by\n→ %.2f only.\n", num, div1);
        }
        else if (fmod(num, div2) == 0)
        {
            printf("RESULT: %.2f is divisible by\n→ %.2f only.\n", num, div2);
        }
        else
        {
            printf("RESULT: %.2f is divisible by\n→ neither %.2f\n→ nor %.2f.\n", num, div1, div2);
        }
    }
    else
    {
        printf("ERROR: invalid choice. please restart and enter either 1 or 2.\n");
    }
    return 0;
}
