#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void get_array(int arr[],int n);
void display(int arr[]);
void set_of_union(int arr1[],int arr2[]);

int arr1[SIZE],arr2[SIZE],arr3[SIZE];
int main()
{
    int n;
    printf("\n Set Operations");
    printf("\n Enter the no. of elements in array1: ");
    scanf("%d",&n);
    printf("\n Enter the elements: ");
    get_array(arr1,n);
    printf("\n Enter the no. of elements in array2: ");
    scanf("%d",&n);
    printf("\n Enter the elements: ");
    get_array(arr2,n);

    //union
    set_of_union(arr1,arr2);
    printf("\n union: ");
    display(arr3);

    //intersection
    intersection(arr1,arr2);
    printf("\n intersection: ");
    display(arr3);

    //difference
    printf("\n difference");
    difference(arr1,arr2);

    return 0;
}

void get_array(int arr[],int n){
  int i;
  for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);
  arr[0]=n;//in index 0 of array store no. of elements
}


void display(int arr[]){
  int i,n;
  n=arr[0];//stores the no. of elements in the array
  for(i=1;i<=n;i++)
    printf("\t%d",arr[i]);
}


void set_of_union(int arr1[],int arr2[])
{
    int i,n,m;
    n=arr1[0];//arr1[0] has no of elements
    for(i=1;i<=n;i++)
        arr3[i]=arr1[i];
    m=arr2[0];//arr2[0] has no. of elements
    for(i=1;i<=m;i++)
        if(!element_present(arr1,arr2[i]))
            arr3[++n]=arr2[i];
        arr3[0]=n;
}

int element_present(int arr[],int x)
{
    int i,n;
    n=arr[0];
    for(i=1;i<=n;i++)
        if(arr[i] == x)
            return 1;
    return 0;

}

void intersection(int arr1[],int arr2[]){
    int n,i,j=0;
    n=arr1[0];
    for(i=1;i<=n;i++)
     if(element_present(arr2,arr1[i]))
        arr3[++j]=arr1[i];
    arr3[0]=j;

}

void difference(int arr1[],int arr2[]){
    int i,j,n,m,flag=0;
    printf("\n array1-array2 : ");
    n=arr1[0];
    m=arr2[0];
    for(i=1;i<=n;i++){
        flag=0;
        for(j=1;j<=m;j++)
        {
            if(arr1[i]==arr2[j])
            {
                flag=1;
                break;

            }
        }
    if(flag==0)
        printf("\t%d",arr1[i]);
    }

    printf("\n array2-array1 : ");
    for(i=1;i<=m;i++){
        flag=0;
        for(j=1;j<=n;j++)
        {
            if(arr2[i]==arr1[j])
            {
              flag=1;
              break;
            }
        }
    if(flag==0)
        printf("\t%d",arr2[i]);
    }

}



