#include<stdio.h>
#include<string.h>


struct student
{
    int id;
    int class;
    int marks;
    char title[34];
};
struct student Harry,Rabi,Subham;



int main()
{
    Harry.id = 11;
    Harry.class = 7;
    Harry.marks = 99;
    strcpy(Harry.title,"Perlk");
    Rabi.id = 12;
    Rabi.class = 7;
    Rabi.marks = 76;
    Subham.marks = 67;
    strcpy(Subham.title,"Clark");
    printf("Harry's id is %d, mark is %d, class is %d, Title is %s.\n",Harry.id,Harry.marks,Harry.class,Harry.title);
    printf("Rabi's id is %d, mark is %d, class is %d, Title is %s.\n",Rabi.id,Rabi.marks,Rabi.class,Rabi.title);
    printf("Subham's id is %d, mark is %d, class is %d, Title is %s.\n",Subham.id,Subham.marks,Subham.class,Subham.title);
    printf("%d",x);
    return 0;
}
