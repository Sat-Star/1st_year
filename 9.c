#include <stdio.h>
struct employee
{
    int eid, eage;
    char ename[20];
    float esal;
};
void main()
{
    struct employee e[50];
    int i, n;
    printf("Enter the no of employee\n");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the details of employee:%d\n", i + 1);
        printf("Enter eid\n");
        scanf("%d", &e[i].eid);
        printf("Enter ename\n");
        scanf("%s", e[i].ename);
        printf("Enter eage\n");
        scanf("%d", &e[i].eage);
        printf("Esal\n");
        scanf("%f", &e[i].esal);
        printf("\n");
    }
    printf("\n**************\n");
    printf("Details of %d employees are as follows\n", n);
    printf("\n**************\n");
    printf("\nEmpid\t Empname\tEmpage\t Empsal\n");
    printf("\n--------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t %s\t %d\t %f", e[i].eid, e[i].ename, e[i].eage, e[i].esal);
    }
    printf("\n--------------------------------------\n");
}
