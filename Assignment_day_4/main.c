#include <stdio.h>
#include <stdlib.h>
#include "day_4_5.h"
#define SIZE 5
#define Size 30

void swapping();
void min_max_array();
void linear();
void binary();
void string();

void func_upper();
void func_reverse();

int main()
{
   //get_array();
   //swapping();
  // sum_product_consecutive_nos();
    //min_max_array();
    //remove_duplicate();
    //linear();
    //binary();
    //string();
   //date();
  // func_upper();
   // func_reverse();
   void five_size_matrix();
    return 0;
}

void swapping(){
    int a,b;
    printf("\n Enter the values of a and b \n");
    scanf("%d%d",&a,&b);
    printf("\n before swapping : a=%d and b=%d",a,b);
    swap_2_nos(a,b);
}

void min_max_array(){
    int arr[SIZE] = {6,7,2,10,8};
    int min,max;
    find_max_min(arr,SIZE,&max,&min);
}

//linear search

void linear()
{
    int i,n,arr[Size],search;
    printf("\n Enter the no. of elements in array: ");
    scanf("%d",&n);
    printf("\n Enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //display the array elements
    display(arr,n);
    printf("\n Enter the search element: ");
    scanf("%d",&search);
    linear_search(arr,search,n);
}

//binary search

 void binary(){
     int i,n,arr[Size],search;
    printf("\n Enter the no. of elements in array: ");
    scanf("%d",&n);
    printf("\n Enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //display the array elements
    display(arr,n);
    ascending_order(arr,n);
    display(arr,n);
    printf("\n Enter the search element: ");
    scanf("%d",&search);
    binary_searching(arr,search,n);
 }

 void string(){
    char s[Size];
    string_length(s);
 }

 void func_upper()
 {

     char str[Size];
     printf("\n Enter a String: ");
     scanf("%s",str);
     upper(str);
 }

  void func_reverse()
 {

     char s[Size];
     printf("\n Enter a String: ");
     scanf("%s",s);
     reverse_string(s);
 }


