
//wap to store record of 3 employees and update the name of employee by name.
#include<stdio.h>
#include<conio.h>
struct emp
{
    int id;
    char name[20];
    long int sal;
};
main()
{
    int i, flag = 0;
    char sname[10], rname[10];
    struct emp e[3];
    //clrscr();
    for (i = 0; i < 3; i++)
    {
        printf("\n Enter Id, Name and Sal of %d employee", i);
        scanf("%d%s%ld", &e[i].id, &e[i].name, &e[i].sal);
    }
    printf("\nId  name and salary of employess are : ");
    for (i = 0; i < 3; i++)
    {
        printf("\n%d      \t%s          \t %ld", e[i].id, e[i].name, e[i].sal);
    }
    fflush(0);
    printf("\n Enter name to be searched");
    scanf("%s", sname);
    //fflush(0);
    printf("\n Enter name to be replaced");
    scanf("%s", rname);
    for (i = 0; i < 3; i++)
    {
        if (strcmp(sname, e[i].name) == 0)
        {
            strcpy(e[i].name, rname);
            flag = 1;
            printf("\n Updated");
        }
    }
    if (flag == 0)
        printf("\n Not found so not updated");
    printf("\n\tId\t\tName\t\tSal");
    for (i = 0; i < 3; i++)
    {
        printf("\n\t\t%d\t\t%s\t\t%ld", e[i].id, e[i].name, e[i].sal);
    }
  //  getch();
}