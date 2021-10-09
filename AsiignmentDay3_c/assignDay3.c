#include "assignDay3.h"
#include "math.h"

int binary_2_decimal(int num){
    int bin,decimal=0,base=1,rem;
    bin=num;
    while(num>0)
    {

        rem=num%10;
        decimal=decimal+rem*base;
        num=num/10;
        base=base*2;
    }
    return decimal;
}

int dec_binary(int n){
    //array to store binary nos
    int bin_arr[10],i,j;
   // printf("\n enter the number you want to convert:");
    //scanf("%d",&n);
    for(i=0;n>0;i++)
    {

        bin_arr[i] =n%2;
        n=n/2;
    }
    printf("\n binary number of the given decimal is = ");
    //printing the array in reverse order
    for(j=i-1;j>=0;j--)
    {


        printf("%d",bin_arr[j]);
    }
    printf("\n");
    return 0;
}

int sum_of_previous_3(){

    int n1=0,n2=0,n3=1,n4,i,element;
    printf("\n enter the no. of elements ");
    scanf("%d",&element);
    printf("\n %d \t %d \t %d ",n1,n2,n3);
    for(i=3;i<element;++i)
    {

        n4=n1+n2+n3;
        printf("\t %d",n4);
        n1=n2;
        n2=n3;
        n3=n4;
    }
    return 0;
}

int generate_pattern(int row)
{
     int i, j;
   //printf("Enter the number of rows: ");
   //scanf("%d", &rows);
   for (i = row; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;

}


int two_digit_sum_7(){
   int lastdigit,firstdigit,sum=0;
    for(int i=10;i<=99;i++){
        lastdigit=i%10;
        firstdigit=i/10;
        sum=firstdigit+lastdigit;
        if(sum==7)
            printf("\t %d",i);
    }
        return 0;
}

float recursive_power(float base,int exponent){
    if(exponent!=0)
        return (base*recursive_power(base,exponent-1));
    else
        return 1;
}

int recursive_factorial(int n){
    if(n>1)
        return (n*recursive_factorial(n-1));
    else
        return 1;
}

float series(){
    float sum=0,x;int n;
    printf("\n Enter the value of X: ");
    scanf("%f",&x);
    printf("\n Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2)
    {
        sum=sum+((x*i)/recursive_factorial(i));//check
    }
    printf("%0.2f",sum);
    return 0;
}

int math_functions(){

    double square_root,number;
    double natural_log;
    double common_log;
    double base,a;
    double value;
    int ch;
    do
    {

        printf("\n Enter your choice: ");
        printf("\n 1.Square Root");
        printf("\n 2.Natural Log");
        printf("\n 3.log10x");
        printf("\n 4.power(x,n)");
        printf("\n 5.cos(x)");
        printf("\n 6.Exit \n");
        scanf("%d",&ch);
        if(ch==6)
        {
            break;
        }
        switch(ch){
            case 1:printf("\n enter the number whose square root you want to find: ");
                    scanf("%lf",&number);
                    square_root=sqrt(number);
                    printf("\n square root od %.2lf is %.2lf ",number,square_root);
                    break;
            case 2:printf("\n enter the value to find log: ");
                    scanf("%lf",&natural_log);
                    printf("\n the natural log of %lf is %lf",natural_log,log(natural_log));
                    break;
            case 3:printf("\n enter the value to find log10x: ");
                    scanf("%lf",&common_log);
                    printf("\n the natural log of %lf is %lf",common_log,log10(common_log));
                    break;
            case 4:printf("Enter base number: ");
                    scanf("%lf", &base);
                    printf("Enter power number(positive integer): ");
                    scanf("%lf", &a);
                    printf("the power of %0.3lf^0.3%lf is %0.3lf",base,a,pow(base,a));
                    break;
            case 5: printf("Enter the value to find cos(x): ");
                   scanf("%lf",&value);
                   printf("the result of cos(%lf)is %lf",value,cos(value));
                   break;

            default:printf("\n Wrong choice!");
        }
    }while(ch!=6);
    return 0;
}
