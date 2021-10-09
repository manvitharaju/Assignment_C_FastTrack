#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

struct student{
 int roll_no;
 char name[SIZE];
 int age;
 float marks;
};

int main()
{
    int n,i;
    struct student *ptr;
    printf("\n Enter the number of students: ");
    scanf("%d",&n);
    ptr = (struct student *)malloc(n*sizeof(struct student));

    //read the data
    printf("\n Enter student Information: ");
    for(i=0;i<n;i++)
    {
        printf("\n For Student[%d]: ",i+1);
        printf("\n Enter roll_no: ");
        scanf("%d",&ptr[i].roll_no);
        printf("\n Enter name: ");
        scanf("%s",ptr[i].name);
        printf("\n Enter age: ");
        scanf("%d",&ptr[i].age);
        printf("\n Enter marks: ");
        scanf("%f",&ptr[i].marks);
    }

    //display data
    printf("\n *****Student Information*****\n ");
    for(i=0;i<n;i++){
        printf("\t %d \t %s \t %d \t %0.2f ",ptr[i].roll_no,ptr[i].name,ptr[i].age,ptr[i].marks);
    }
    return 0;
}
