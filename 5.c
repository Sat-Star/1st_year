#include <stdio.h>
int main()
{
    int a[100], n, i, key, low, mid = 0, high, found = 0;
    printf("Enter the no of elements\n");
    scanf("%d", &n);
    printf("Enter %d elements in ascending order\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter an element to search\n");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high && !found)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
            found = 1;
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (found == 1)
        printf("Key found at position %d\n", mid + 1);
    else
        printf("Key not found");
    return 0;
}
