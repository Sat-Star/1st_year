#include <stdio.h>
int main()
{
    char name[20];
    int n;
    float amt;
    printf("Enter the consumer name\n");
    scanf("%s", name);
    printf("Enter total units consumed\n");
    scanf("%d", &n);
    if (n <= 200)
    {
        amt = n * 80;
    }
    else if (n > 200 && n <= 300)
    {
        amt = (n - 200) * 90;
        amt = amt + 200 * 80;
    }
    else
    {
        amt = (n - 300) * 100;
        amt = amt + 100 * 90 + 200 * 80;
    }
    amt = amt / 100;
    amt = amt + 100;
    if (amt > 400)
    {
        amt = amt + amt * 15 / 100;
    }
    printf("Total amount to be paid = Rs%.2f\n", amt);
    return 0;
}
