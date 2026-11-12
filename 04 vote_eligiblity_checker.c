#include <stdio.h>
int main()
{
    int num;
    printf("enter your age: ");
    scanf("%d", &num);
    if (num<18)
    {
        printf("You are not eligible to vote");
    }
    else
    {
        printf("You are eligible to vote");
    }
    return 0;
}
