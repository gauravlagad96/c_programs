// wap to store recod of 3 employee and insert record of employee
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
    int i, index, k, usal, uid;
    char uname[10];
    struct emp e[4];
   // clrscr();
    for (i = 0; i < 3; i++)
    {
        printf("\n Enter Id, Name and Sal of %d employee", i);
        scanf("%d%s%ld", &e[i].id, &e[i].name, &e[i].sal);
    }
    printf("\t Id     \t Name       \t Sal");
    for (i = 0; i < 3; i++)
    {
        printf("\n\t%d      \t %s          \t %ld", e[i].id, e[i].name, e[i].sal);
    }
    fflush(0);
    printf("\n Enter id, name and slaary to be inserted");
    scanf("%d", &uid);
    fflush(0);
    scanf("%s",uname);
    fflush(0);
    scanf("%d", &usal);
    printf("\n Enter index where you want to insert record");
    scanf("%d", &index);
    for (i = 3; i > index; i--)
    {
        e[i] = e[i - 1];
    }
    e[index].id = uid;
    e[index].sal = usal;
    strcpy(e[index].name, uname);


    printf("\n\t Id     \t  Name       \t Sal");
    for (i = 0; i < 4; i++)
    {
        printf("\n\t%d      \t %s          \t %ld", e[i].id, e[i].name, e[i].sal);
    }
   // getch();
}

/*output:
 Enter Id, Name and Sal of 0 employee1
aaa
111

 Enter Id, Name and Sal of 1 employee2
sss
222

 Enter Id, Name and Sal of 2 employee3
ddd
333
         Id              Name            Sal
        1        aaa             111
        2        sss             222
        3        ddd             333
 Enter id, name and slaary to be inserted44
fff
4444

 Enter index where you want to insert record1

         Id               Name           Sal
        1        aaa             111
        44       fff             4444
        2        sss             222
        3        ddd             333
        */