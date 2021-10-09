#include "Assignment_Day2.h"

int sum_of_five_digits_modulus_using_for(int input)// function to enter a 5 digit no. and to find its sum
{

    int sum;

    for(sum = 0; input != 0; input = input / 10)// for loop to run through all the 5 digits from MSB to LSB
        sum = sum + input % 10;//mod operator to extract a digit and sum it up

    return sum;
}

// function to find reverse of a number
int reverse_number(int n){

    int sum =0;
    while(n!=0){
        sum=sum*10+n%10;//find the mod of n and add it to sum
        n=n/10;//to extract the last digit
    }
    return sum;
}
//function to find the count of a digit in a number

int count_digit(int num,int digit){
    int cnum,count,rem;
    count=0;
    cnum=num;
    while(cnum>0){
        rem=cnum%10;
        if(rem == digit)
            count++;
        cnum=cnum/10;
    }
    return count;
}
// to check if a no. is prime or not
int is_prime_number(int pnum)
{
    int i;

    for(i=2; i <= pnum/2; i++)// we check the pnum range for only half
    {
        if(pnum % i == 0)// if the input is divisible by any other number then not prime

            return 0; // not prime
    }

    return 1;// is prime
}

// generate N prime numbers
int generate_first_n_prime_numbers(int limit)
{
    int count = 0,pnum = 2;

    while(count < limit)
    {
        if(is_prime_number(pnum)){ // check if it is a prime number
            count++; // keep track of prime numbers
            printf("%d \t", pnum); // display the prime number
        }

        pnum++; // choosing next number
    }

    return count;
}

//palindrome function
int palindrome(int n){

    int original,reversed=0,remainder;
    original=n;
    while(n!=0){
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
    }
    if(original == reversed)
        return 1;
    return 0;
}

//1+11+111 series

int one_series(int n){
    int sum=0;
    long int t=1;
    //printf("enter the number of terms: ");
    //scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        printf("%ld ",t);
        if(i<n)
        {
            printf("+ ");
        }
        sum=sum+t;
        t=(t*10)+1;
    }
    printf("sum is = %d ",sum);
    return sum;
}
// is Armstrong or not
int isArmstrong(int number){
    int lastDigit=0,power=0,sum=0;

    int n = number;
    while(n!=0)
    {

        lastDigit=n%10;
        power=lastDigit*lastDigit*lastDigit;
        sum=sum+power;
        n=n/10;
    }
    if(sum == number)
        return 1;
    return 0;
}

//amicable or not
int amicable(int num1,int num2){
    int num1_sum=0,num2_sum=0;
    for(int i=1;i<num1;i++)// for num1 find divisors
    {

        if((num1%i==0))
        {
            num1_sum=num1_sum+i;
        }
    }
    for(int i=1;i<num2;i++)// for num2 find divisors
    {

        if((num2%i==0))
        {
            num2_sum=num2_sum+i;// add the divisors
        }
    }


    if((num1== num2_sum) && (num2 == num1_sum))
        return 1;
    return 0;
}

//menu driven program to add, sub, mul two numbers
void menu_add_sub_mul()
{
    int n1,n2,ch;
    char choice;
    printf("\n Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    do{
        printf("\n Enter your choice:");
        printf("\n  1.ADD ");
        printf("\n  2.SUBTRACT ");
        printf("\n  3.MULTIPLY ");
        printf("\n  4.Exit \n");
        scanf("%d",&ch);
        if(ch==4)
        {
            break;
        }
        switch(ch)
        {
            case 1: printf("\n Sum: %d",n1+n2);
                break;
            case 2: printf("\n Subtract :%d",n1-n2);
                break;
            case 3: printf("\n Multiply :%d",n1*n2);
                break;
            case 4:
                break;
            default:printf("\n Wrong choice!");
        }
    }while(ch!=4);
}



