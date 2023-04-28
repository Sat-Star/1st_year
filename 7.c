#include <stdio.h>
int main()
{
    char str1[100], str2[100], str3[100];
    int i = 0, j = 0, count = 0;
    printf("Enter the string 1\n");
    gets(str1);
    printf("Enter the string 2\n");
    gets(str2);
    while (str1[i] != '\0')
    {
        str3[count] = str1[i];
        count++;
        i++;
    }
    str3[count++] = ' ';
    while (str2[j] != '\0')
    {
        str3[count] = str2[j];
        count++;
        j++;
    }
    str3[count] = '\0';
    printf("String 1 =\t");
    puts(str1);
    printf("String 2 =\t");
    puts(str2);
    printf("\nString 3 =\t");
    puts(str3);
    return 0;
}
