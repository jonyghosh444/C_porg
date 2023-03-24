#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char department[32];
    float mark;
};

union employee
{
    int empid;
    char department[32];
    int salary;
};

int main()
{
    struct student Durjoy, Anik;
    union employee Delumamu, Shaijoddi;

    // Durjoy.id = 10101;
    // strcpy(Durjoy.department,"CSE");
    // Durjoy.mark= 80;
    // Anik.id = 10102;
    // strcpy(Durjoy.department,"CSE");
    // Anik.mark= 80;

   
    strcpy(Delumamu.department, "Hostel staff");
    Delumamu.empid = 3331;
    Delumamu.salary = 15000;

    // Shaijoddi.empid = 3331;
    // Shaijoddi.empid = 15000;
    // strcpy(Shaijoddi.department,"Agriculture");

    // printf("%p\n",&Durjoy.id);
    // printf("%p\n",&Durjoy.department);
    // printf("%p\n",&Durjoy.mark);
    // printf("%p\n",&Anik.id);
    // printf("%p\n",&Anik.department);
    // printf("%p\n",&Anik.mark);

    // printf("Durjoy's id:- %d\n",Durjoy.id);
    // printf("Durjoy's department:- %s\n",Durjoy.department);
    // printf("Durjoy's mark:- %f\n",Durjoy.mark);
    // printf("Anik's id:- %d\n",Anik.id);
    // printf("Anik's department:- %s\n",Anik.department);
    // printf("Anik's mark:- %f\n",Anik.mark);

    // printf("%p\n",&Shaijoddi.empid);
    // printf("%p\n",&Shaijoddi.department);
    // printf("%p\n",&Shaijoddi.salary);
    // printf("%p\n",&Delumamu.empid);
    // printf("%p\n",&Delumamu.department);
    // printf("%p\n",&Delumamu.salary);

    // printf("Shaijoddi's empid:- %d\n",Shaijoddi.empid);
    // printf("Shaijoddi's department:- %s\n",Shaijoddi.department);
    // printf("Shaijoddi's salary:- %d\n",Shaijoddi.salary);
    printf("Delumamu's salary:- %d\n", Delumamu.salary);
    printf("Delumamu's empid:- %d\n", Delumamu.empid);
    printf("Delumamu's department:- %s\n", Delumamu.department);

    return 0;
}