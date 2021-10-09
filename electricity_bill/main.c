#include <stdio.h>
#include <stdlib.h>

int main()
{
    int units;
    float total_amount;
    //input from user
    printf("Enter total units consumed: ");
    scanf("%d",&units);

    //bill calculation
    if(units<=200)
        total_amount=units*1;
    else if(units<=300)
        total_amount=units*1.5;
    else
        total_amount=units*2;

    printf("Electricity Bill = %0.2f",total_amount);

    return 0;
}
