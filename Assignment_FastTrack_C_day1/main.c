#include <stdio.h>
#include <stdlib.h>
#include "assignment_header.h"
#include "assert.h"

void Upper_To_Lower();
void Circle_area();
void Simple_Compound_Interest();
void Celsius_2_Fahrenheit();
void Fahrenheit_2_Celsius();
void EvenOdd();
void Leap();
void lshift();

int main()
{
     //Upper_To_Lower();
     //Circle_area();
     //Simple_Compound_Interest();
      //Celsius_2_Fahrenheit();
      //Fahrenheit_2_Celsius();
     // EvenOdd();
      // Leap();
      lshift();

     return 0;
}

void Upper_To_Lower(){

    char s[1000];// string with 999 characters and and at end as '\0'
    printf("\n Enter  the string: ");
    gets(s);// reads characters from stdin
    stringUpper_To_Lower(s);// function to convert uppercase to lower case
    printf("\n string in lowercase ='%s'\n",s);
}

void Circle_area(){
    float r;
    printf("\n enter the radius of circle ");
    scanf("%f",&r);
    printf("\n The area of circle is %f ",Area_Circle(r));
}

void Simple_Compound_Interest(){
    float p,t,r,si,amt,ci;
    printf("\n Enter Principle,Rate,Time= ");
    scanf("%f%f%f",&p,&r,&t);
    si = Simple_Interest(p,r,t);
    printf("\n Simple Interest: %f ",si);
    ci = Compound_Interest(p,r,t);
    printf("\n Compound Interest: %f",ci);
}

void Celsius_2_Fahrenheit(){
    float celsius,fahreheit;
    printf("\n Enter temp in Celsius: ");
    scanf("%f",&celsius);
    printf("\n The temperature in fahrenheit is : %f",Celsius_To_Fahrenheit(celsius));
}

void Fahrenheit_2_Celsius(){
    float celsius,fahreheit;
    printf("\n Enter temp in Fahrenheit: ");
    scanf("%f",&fahreheit);
    printf("\n The temperature in Celsius is : %f",Fahrenheit_To_Celsius(fahreheit));
}

void EvenOdd(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(Even_or_odd(num)== 0)
       printf(" %d is even",num);
    else
        printf("%d is odd",num);

    assert(Even_or_odd(5)== 1);
    assert(Even_or_odd(8)== 0);
    //assert(Even_or_odd(-7)== 1);
}
void Leap(){
    int year;
    printf("enter the year: ",&year);
    scanf("%d",&year);
    if(leapYear(year))
        printf("%d is leap year",year);
    else
        printf("%d is not a leap year",year);

    assert(leapYear(2028)== 1);
    assert(leapYear(2030)==0);
}

void lshift(){
    int n;
    printf("enter the power value(N): ");
    scanf("%d",&n);
    printf("2^%d is %d",n,leftShift(n));
    assert(leftShift(5)== 32);
    assert(leftShift(3)== 8);
    assert(leftShift(-1)== INVALID);
}

