#include <stdio.h>
#include <stdlib.h>
#include "assert.h"

//Macros
#define CONCAT(a,b) a ## b
#define VALUE 5
#define SQUARE(X) X*X


int bin_to_deci();
int deci_to_bin();
int power();
int fact();
int concatenate_2_int();


int main()
{
    //bin_to_deci();
   // assert(dec_binary(5)==101);
   //deci_to_bin();
   //sum_of_previous_3();
   //generate_pattern(5);
   //assert(two_digit_sum_7(34)==34);
   //assert(two_digit_sum_7(35)==0);
   //two_digit_sum_7();
   //power();
   //fact();
   series();
   //concatenate_2_int();
   //assert(SQUARE(VALUE)== 25);
   //math_functions();

    return 0;
}

int bin_to_deci(){
    assert(binary_2_decimal(1)==1);
    assert(binary_2_decimal(101)==5);
    assert(binary_2_decimal(1101)==13);
}

int deci_to_bin(){
    dec_binary(5);
    dec_binary(13);
}

int power(){

 int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = recursive_power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int fact(){
    assert(recursive_factorial(3)== 6);
    assert(recursive_factorial(5)== 120);
    assert(recursive_factorial(0)== 1);
    assert(recursive_factorial(-1)== 1);
}

int concatenate_2_int(){
    int result;
    result = CONCAT(304,403);
	printf("%d",result);
}


