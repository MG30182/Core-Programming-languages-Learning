#include <stdio.h>                  // Python ke input() aur print() ki tarah input/output functions use karne ke liye

int main()                          // C program ka starting point, Python ke top-level code ki tarah
{
    int num;                        // Ek integer variable banana, Python ke num = 0 jaisa, lekin yahan type pehle declare karna zaroori hai

    printf("Enter an integer: ");   // User ko message dikhana, Python ke print() ki tarah

    scanf("%d", &num);              // User se integer input lena
                                    // %d batata hai ki input ek decimal integer (int) hai
                                    // &num variable num ka memory address deta hai, jahan input store hoga
                                    // scanf ko address chahiye taaki woh original variable ki value change kar sake

    if (num > 0)                    // Check karna ki num zero se bada hai ya nahi
    {
        printf("Positive number");  // Condition true hone par Positive number print karna
    }
    else if (num < 0)               // Agar pehli condition false hai toh check karna ki num zero se chhota hai ya nahi
    {
        printf("Negative number");  // Condition true hone par Negative number print karna
    }
    else                            // Agar dono conditions false hain toh num zero hi hoga
    {
        printf("Zero");             // Zero print karna
    }

    return 0;                       // Operating system ko batana ki program successfully complete hua
}
