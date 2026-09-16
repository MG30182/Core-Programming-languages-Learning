#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    int result = add(a, b);
    printf("The sum is: %d\n", result);
    return 0;
}

/*
int a, b;
→this creates two empty whole-number variables.
→they will store the numbers entered by the user.

scanf("%d", &a);
→this takes a whole number from the user and stores it inside "a".
→"%d" tells scanf() that we are expecting an int.
→"&a" tells scanf() WHERE to store the number.

scanf("%d", &b);
→this does the same thing for the second number.
→the user's second number is stored inside "b".

int result = add(a, b);
→this calls our custom "add()" function.
→the values stored in "a" and "b" are sent to the Function.
→add() adds them together and returns the answer.
→the answer is then stored inside "result".

 printf("The sum is: %d\n", result);
→this prints the answer stored in "result".
→"%d" is replaced by the value of "result".

 return 0;
→This tells the operating system that the program finished successfully.
*/