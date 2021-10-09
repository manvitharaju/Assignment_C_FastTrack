#include<Assignment_Day2.h>

int sum_of_five_digits_modulus_using_for(int input)
{

    int sum;

    for(sum = 0; input != 0; input = input / 10)
        sum = sum + input % 10;

    return sum;
}
