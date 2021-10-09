
#include "assignment_header.h"
#include<math.h>

void stringUpper_To_Lower(char *s)// function to convert upper case letters to lower case
{

    int i;
    for(i=0;s[i];i++)// to iterate through the string
    {

        if(s[i]>=65 && s[i]<=90)// ASCII values for uppercase letters range between 65 to 90
            s[i]+=32;//adding 32 to the uppercase ASCII value converts it to lowercase
    }
}

float Area_Circle(float r){
    return (3.14*r*r);
}

float Simple_Interest(float p,float r, float t){
    return (p*t*r/100);
}
float Compound_Interest(float p,float r, float t){
    float amt = p*(pow((1+r/100),t));
    return (amt-p);
}

float Celsius_To_Fahrenheit(float celsius){
    return ((celsius*9/5)+32);
}

float Fahrenheit_To_Celsius(float fahrenheit){
    return (((fahrenheit-32)*5)/9);
}

int Even_or_odd(int num){
    return num%2;
}

int leapYear(int y){
    if((y%400==0)||((y%4==0)&&(y%100!=0)))
        //Leap year if perfectly divisible by 400
        //Leap year if perfectly divisible by 4
        //but if not divisible by 100
        return 1;
    else    //not leap year
        return 0;
}
int leftShift(int n){
    if(n<0)
        return INVALID;
    return (1<<n);
}
