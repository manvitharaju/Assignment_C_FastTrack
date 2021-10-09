#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 30

//structure of student

struct student{
    int roll_no;
    char name[SIZE];
    int age;
    int marks;
};

//functions
void search_student_rollno(int n,struct student *ptr);
void search_student_name(int n,struct student *ptr);
void highest_marks(int n,struct student *ptr);
void name_with_A(int n,struct student *ptr);


int main()
{
    struct student *ptr;
    int n;
    printf("\n Enter the number of students: ");
    scanf("%d",&n);

    //memory allocation for the stricture using malloc

    ptr=(struct student*)malloc(n*sizeof(struct student));

    //get the student data
    for (int i = 0; i < n; ++i) {
        printf("\n Enter Roll_no , Name , Age ,Marks of student %d: \n",i+1);
        scanf("%d %s %d %d",&ptr[i].roll_no,ptr[i].name,&ptr[i].age,&ptr[i].marks);
  }

  printf("Displaying Information:\n");
  for (int i = 0; i < n; ++i) {
    printf("%d \t %s \t %d \t %d \n",ptr[i].roll_no,ptr[i].name,ptr[i].age,ptr[i].marks);
  }

 // search_student_rollno(n,ptr);
  //search_student_name(n,ptr);
  //highest_marks(n,ptr);
  name_with_A(n,ptr);

  free(ptr);
  return 0;
}

void search_student_rollno(int n,struct student *ptr){

   int sroll;
   printf("\n **** searching student by roll no ******");
   printf("\n Enter the roll no you want to search: ");
   scanf("%d",&sroll);
    for(int i=0;i<n;i++)
    {
        if(sroll ==(ptr[i].roll_no))
        {
            printf("\n found: %d \t %s \t %d \t %d \n",ptr[i].roll_no,ptr[i].name,ptr[i].age,ptr[i].marks);
            return;
        }

    }
    printf("\n record not found");

}

void search_student_name(int n,struct student *ptr){
   char sname[SIZE];
   printf("\n **** searching student by name ******");
   printf("\n Enter the name you want to search: ");
   scanf("%s",sname);
   for(int i=0;i<n;i++)
    {
        if(strcmp(sname,ptr[i].name)==0)
        {
            printf("\n found string: %d \t %s \t %d \t %d \n",ptr[i].roll_no,ptr[i].name,ptr[i].age,ptr[i].marks);
            return;
        }

    }
    printf("\n record not found");
}

void highest_marks(int n,struct student *ptr){\
     int max=0;
     int i;
    printf("\n The student details with highest marks is: ");
    for(i=0;i<n;i++)
    {
        if(ptr[i].marks>max)
            max=ptr[i].marks;

    }
     printf("\n Student with highest marks : %d",max);
     printf("\n Student with highest marks : %d",max);
     for(i=0;i<n;i++)
     {
         if (max==ptr[i].marks)
         {
            printf("\n highest Student details: %d \t %s \t %d \t %d \n",ptr[i].roll_no,ptr[i].name,ptr[i].age,ptr[i].marks);
            return;
         }
     }
}

void name_with_A(int n,struct student *ptr){
    char a='A';

    for(int i=0;i<n;i++)
    {
        printf("%s",ptr[0].name);
        if(ptr[0].name==a)
            printf("same");
        else
            printf("not same");
    }
}

