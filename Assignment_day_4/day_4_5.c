
#include "day_4_5.h"
#define array_size 10
#define SIZE 5
#define Size 30


int get_array(){
    int arr[array_size],n,i;
    printf("\n Enter Array Size: ");
    scanf("%d",&n);
    printf("\n Enter the elements : ");
    //get array
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //display array
    printf("Array elements are: ");
    display(arr,n);
    ascending_order(arr,n);
    display(arr,n);
    descending_order(arr,n);
    display(arr,n);
}

int display(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        printf("\t %d",arr[i]);
    }
}

int ascending_order(int arr[],int n){
    int i,j;
    for( i=0;i<n;i++){
        for( j=0;j<n;j++){
            if(arr[j]>arr[i])
            {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n Array elements in ascending order: ");
    return 0;
}

int descending_order(int arr[10],int n){
    int i,j;
    for( i=0;i<n-1;i++){
        for( j=i+1;j<n;j++){
            if(arr[i]<arr[j])
            {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n Array elements in ascending order: ");
    return 0;
}


//function to swap
void swap_2_nos(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\n after swapping : a=%d and b=%d",x,y);
}

//sum of product of consecutive nos


int sum_product_consecutive_nos(){
    int num[30],n,sum=0,i;
    printf("\n Enter the n value: ");
    scanf("%d",&n);
    printf("enter the integers: ");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    //printing the array num
    for(i=0;i<n-1;i++){
        sum=sum+(num[i]*num[i+1]);
        printf("%d*%d",num[i],num[i+1]);
        if(i<n-2)
            printf("+");
    }
    printf("\n sum= %d",sum);

    return 0;
}

// to find maximum and minimum values

void find_max_min(int arr[],int size_arr,int *max_value,int *min_value){
    int i;
    *max_value=*min_value=arr[0];
    for(i=1;i<size_arr;i++)
    {
        if(*min_value>arr[i])
            *min_value=arr[i];
        if(*max_value<arr[i])
            *max_value=arr[i];
    }
    printf("the minimum value is :%d ",*min_value);
    printf("the maximum value is :%d ",*max_value);

}

//function to remove duplicate elements in an array

void remove_duplicate(){
    int arr[Size];
    int arr_size;
    int i,j,k;

    printf("\n Enter the size of array : ");
    scanf("%d",&arr_size);

    printf("\n Enter elements in array: ");
    for(i=0;i<arr_size;i++)
    {
        scanf("%d",&arr[i]);
    }

   // duplicate_elements(arr,arr_size);
    for(i=0;i<arr_size;i++)
    {
        for(j=i+1;j<arr_size;j++)
        {
            //if duplicate element found
            if(arr[i]==arr[j])
            {
                //delete the current duplicate element
                for(k=j;k<arr_size-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                //decrement size of array
                arr_size--;
                //if shifting of elements occur then dont increment j
                j--;
            }
        }
    }

    printf("\n Array elements after deleting duplicate elements: ");
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
    }
}


//linear search

void linear_search(int arr[],int search_ele,int n)
{
    //linearly search all the elements
    int i,count=0;
    for(i=0;i<n;i++){
        if(arr[i]== search_ele)
        {
            printf("\n Search element %d found at %d",search_ele,i+1);//index starts from 0
            count++;
            }
        }
    if(count ==0)
        printf("\n %d element not found",search_ele);
    else
        printf("\n %d element found %d times",search_ele,count);
}

void binary_searching(int arr[],int search,int n)
{
    int first,last,middle;//indexes of array
    first=0;
    last=n-1;
    middle=(first+last)/2;

    while(first<=last)
    {
        if(arr[middle]<search)
            first=middle+1;
        else if(arr[middle]==search)
        {
           printf("\n %d found at %d",search,middle+1);
            break;
        }
        else
            last=middle-1;
        middle=(first+last)/2;
    }

    if(first>last)
        printf("\n %d is not present in the array");
}

//find the length of string

void string_length(char s[]){
    int i;
    printf("\n Enter a string: ");
    scanf("%s",s);

    for(i=0;s[i]!='\0';++i);
        printf("\n The length of input string is %d",i);

 }

 //function to display entered date

 void date(){
     int d,m,y;
     printf("\n Enter the date in numbers: ");
     scanf("%d",&d);
     printf("\n Enter the month in numbers : ");
     scanf("%d",&m);
     printf("\n Enter the year in numbers: ");
     scanf("%d",&y);
     switch(m){
        case 1:printf("the date is %dth January,%d",d,y);
               break;
        case 2:printf("the date is %dth February,%d",d,y);
               break;
        case 3:printf("the date is %dth March,%d",d,y);
               break;
        case 4:printf("the date is %dth April,%d",d,y);
               break;
        case 5:printf("the date is %dth May,%d",d,y);
               break;
        case 6:printf("the date is %dth June,%d",d,y);
               break;
        case 7:printf("the date is %dth July,%d",d,y);
               break;
        case 8:printf("the date is %dth August,%d",d,y);
               break;
        case 9:printf("the date is %dth September,%d",d,y);
               break;
        case 10:printf("the date is %dth October,%d",d,y);
               break;
        case 11:printf("the date is %dth November,%d",d,y);
               break;
        case 12:printf("the date is %dth December,%d",d,y);
               break;
        default:printf("\n Entered wrong month");
                break;
     }

 }

 void upper(char str[]){
    int i;
    printf("\n %s upper case is ",str);
    for(i=0;str[i];i++)
    {
         if(str[i]>96 && str[i]<123)
            str[i]-=32;
    }
       printf("%s",str);
 }

 void reverse_string(char s[])
 {
     int i,j,length,temp;
     //finding length of string
      for(i=0;s[i]!='\0';++i);
        length=i;
      //reversing the string
      for (i = 0; i < length/2; i++)
    {
        // temp variable use to temporary hold the string
        temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
    printf("%s",s);
 }

