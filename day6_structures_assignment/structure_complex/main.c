#include <stdio.h>
#include <stdlib.h>

struct complex{
    int real;
    int img;
};

int main()
{
    int choice,x,y,z;
    struct complex a,b,c;
    while(1)
    {
        printf("\n 1.Add 2 Complex nos.");
        printf("\n 2.Sub 2 Complex nos.");
        printf("\n 3.Multiply 2 Complex nos.");
        printf("\n 4.Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);

        if(choice==4)
            exit(0);
        if(choice>=1 && choice<=4)
        {
            printf("Enter a and b where a + ib is the first complex number.");
            printf("\na = ");
            scanf("%d", &a.real);
            printf("b = ");
            scanf("%d", &a.img);
            printf("Enter c and d where c + id is the second complex number.");
            printf("\nc = ");
            scanf("%d", &b.real);
            printf("d = ");
            scanf("%d", &b.img);

      }
      if (choice == 1)
     {
       c.real = a.real + b.real;
       c.img = a.img + b.img;

       if (c.img >= 0)
         printf("Sum of the complex numbers = %d + %di", c.real, c.img);
       else
         printf("Sum of the complex numbers = %d %di", c.real, c.img);
     }
     else if (choice == 2)
     {
       c.real = a.real - b.real;
       c.img = a.img - b.img;

       if (c.img >= 0)
         printf("Difference of the complex numbers = %d + %di", c.real, c.img);
       else
         printf("Difference of the complex numbers = %d %di", c.real, c.img);
     }
     else if (choice == 3)
     {
       c.real = a.real*b.real - a.img*b.img;
       c.img = a.img*b.real + a.real*b.img;

       if (c.img >= 0)
         printf("Multiplication of the complex numbers = %d + %di", c.real, c.img);
       else
         printf("Multiplication of the complex numbers = %d %di", c.real, c.img);
     }
     else
       printf("Invalid choice.");

    printf("\nPress any key to enter choice again...\n");

    }
    return 0;
}
