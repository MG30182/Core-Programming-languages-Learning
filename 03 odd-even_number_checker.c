#include <stdio.h>  // Input aur output functions (printf, scanf) use karne ke liye

int main()                                  // Program yahan se start hota hai
{
    int num;                                 // Ek integer variable banana, jisme user ka number store hoga
    printf("Enter a number: ");  // User ko number enter karne ke liye message dikhana
    scanf("%d", &num);             // User se integer input lena
                                                  // %d batata hai ki input integer type ka hai
                                                  // &num variable ka memory address deta hai
                                                  // Taaki scanf input ko num ke andar store kar sake
    if (num % 2 == 0)                // Check karna hai ki num ko 2 se divide karne par remainder 0 hai ya nahi
    {
        printf("Even number");   // Agar remainder 0 hai toh number Even hai
    }
    else                                      // Agar condition false hai toh number Odd hoga
    {
        printf("Odd number");   // Odd number print karna
    }

    return 0;                              // Program successfully end karna
}
