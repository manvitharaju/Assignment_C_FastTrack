#include <stdio.h>
#include <stdlib.h>
#include "Assignment_Day2.h"
#include<assert.h>

void sum_of_5_digits();
void reverse_no();
void count_digi();
void N_prime();
void palindrome_num();
void oneSeries();
void armstrong();
void amicable_nos();
void menu_numbers();

int main()
{

    sum_of_5_digits();
    reverse_no();
    count_digi();
    //N_prime();
   // palindrome_num();
   // oneSeries();
     //armstrong();
    // amicable_nos();
      menu_numbers();
    return 0;
}

void sum_of_5_digits(){
     assert(sum_of_five_digits_modulus_using_for(13457) == 20);
     assert(sum_of_five_digits_modulus_using_for(12345) == 15);
     assert(sum_of_five_digits_modulus_using_for(10001) == 2);
     assert(sum_of_five_digits_modulus_using_for(10000) == 1);
}

void reverse_no(){
    assert(reverse_number(12345)== 54321);
    assert(reverse_number(10023)== 32001);
    assert(reverse_number(548)== 845);
    assert(reverse_number(-12345)== -54321);
}

void count_digi(){
    assert(count_digit(11234,1)== 2);
    assert(count_digit(11234,4)== 1);
    assert(count_digit(8909996,9)== 4);
}

void N_prime(){
    assert(is_prime_number(2) == 1);
    assert(is_prime_number(3) == 1);
    assert(is_prime_number(9) == 0);
    assert(is_prime_number(49) == 0);
    assert(is_prime_number(11) == 1);
    assert(is_prime_number(13) == 1);

    assert(generate_first_n_prime_numbers(100) == 100);
    assert(generate_first_n_prime_numbers(10) == 10);
}

void palindrome_num(){
    assert(palindrome(12321) == 1);
    assert(palindrome(1234) == 0);
}

void oneSeries(){
    //one_series(3);
    assert(one_series(5)== 12345);
    assert(one_series(3)== 123);
    assert(one_series(7)== 1234567);
}

void armstrong(){
    assert(isArmstrong(153)== 1);
    assert(isArmstrong(4156)== 0);
    assert(isArmstrong(980)== 0);
}

void amicable_nos(){
    assert(amicable(220,284)==1);
    assert(amicable(12,13)==0);
    assert(amicable(24,47)==0);
}

void menu_numbers(){
    menu_add_sub_mul();
}
