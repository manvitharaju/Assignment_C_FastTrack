#include <stdio.h>
#include <stdlib.h>

int flag=0;
int linearsearch(int *ptr,int search,int n);
void min_and_max(int *ptr,int n);
void sum_of_elements(int *ptr,int n);
void Sum_of_even_odd(int *ptr,int n);
void palindrome(int *ptr,int n);

int main()
{
    int *ptr;
    int search;
    int n,i;//no of elements
    printf("\n Enter the number of integer values: ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

    // if memory cannot be allocated
    if(ptr == NULL) {
      printf("Error! memory not allocated.");
      exit(0);
    }
    //read array elements
    for(i=0;i<n;i++)
    {
        printf("\n Enter the element %d: ",i+1);
        scanf("%d",ptr+i);
    }

    //print array elements
    printf("\n Array elements are: ");
    for(i=0;i<n;i++)
    {
        printf(" %d\t ",*(ptr+i));
    }
    //linear search
    printf("\n enter the element to be searched: ");
    scanf("%d",&search);
    i=0;
    i= linearsearch(ptr, search,n);

    if(flag==0)
         printf("The number is not in the list\n");
    else
         printf("The number is found at position %d\n",i+1);

     min_and_max(ptr,n);
     sum_of_elements(ptr,n);
     Sum_of_even_odd(ptr,n);
     palindrome(ptr,n);

    //free the memory
    free(ptr);
    return 0;
}

//functions
int linearsearch(int *ptr,int search,int n){
    int i;
    for(i=0;i<=n-1;i++)
    {
         if(*(ptr+i)==search)
       {
             flag=1;
             break;
         }
    }
    return i;
}

void min_and_max(int *ptr,int n)
{
    int min,max;
    min=max=ptr[0];
    for(int i=1; i<n; i++)
    {
         if(min>ptr[i])
		  min=ptr[i];
		   if(max<ptr[i])
		    max=ptr[i];
    }
     printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
}

void sum_of_elements(int *ptr,int n){
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("\n The sum of elements are: %d",sum);
}

void Sum_of_even_odd(int *ptr,int n){
    int even_sum,odd_sum;
    even_sum=0;
    odd_sum=0;
    for(int i=0;i<n;i++)
    {
        if(*(ptr+i)%2 == 0)
            even_sum +=*(ptr+i);
        else
            odd_sum +=*(ptr+i);
    }
    printf("\n The even sum: %d",even_sum);
    printf("\n The odd sum: %d",odd_sum);
}

void palindrome(int *ptr,int n){
   int check=0;
   int i,j;
   for(i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
   {
       if(*(ptr+i) != *(ptr+j))
       {
           check=1;
           break;
       }
   }
   if(check==1)
    printf("\n the array is not palindrome");
   else
    printf("\n the array is palindrome");
}
