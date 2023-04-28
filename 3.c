#include <stdio.h>
int main()
{
    int n, rev = 0, temp, digit;
    printf("Enter an integer\n");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    printf("Given no is %d\n", temp);
    printf("Its reverse is %d\n", rev);
    if (temp == rev)
        printf("This no. %d is a palindrome\n", temp);
    else
        printf("This no. %d is not a palindrome\n", temp);
    return 0;
}
