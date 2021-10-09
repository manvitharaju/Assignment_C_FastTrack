#include <stdio.h>
#include <stdlib.h>
#define Size 10

void five_matrix();
void add_matrix();
void equal_matrix();
void sparse_matrix();

int main()
{
    //five_matrix();
     //add_matrix();
    // equal_matrix();
    sparse_matrix();
    return 0;
}


void five_matrix(){

    int m[Size][Size];int r,c;
    printf("\n Enter the row size of matrix : ");
    scanf("%d",&r);
    printf("\n Enter the column size of matrix : ");
    scanf("%d",&c);
    printf("\n Enter the elements of %d*%d matrix: ",r,c);
    construct_matrice(m,r,c);
    printf("\n the elements of the matrix: \n");
    display_matrice(m,r,c);
}

void add_matrix()
{
    int mat1[Size][Size],mat2[Size][Size],sum[Size][Size];
    int r,c;
    printf("\n Enter the row size of matrix A : ");
    scanf("%d",&r);
    printf("\n Enter the column size of matrix A: ");
    scanf("%d",&c);
    printf("\n Enter the elements of %d*%d matrix A: ",r,c);
    construct_matrice(mat1,r,c);
    printf("\n the elements of the matrix A: \n");
    display_matrice(mat1,r,c);

    printf("\n Enter the row size of matrix B : ");
    scanf("%d",&r);
    printf("\n Enter the column size of matrix B: ");
    scanf("%d",&c);
    printf("\n Enter the elements of %d*%d matrix B: ",r,c);
    construct_matrice(mat2,r,c);
    printf("\n the elements of the matrix B: \n");
    display_matrice(mat2,r,c);
    printf("\n After Adding");
    add_mat(mat1,mat2,sum,r,c);

}

void equal_matrix(){
    int mat1[Size][Size],mat2[Size][Size];
    int row1,row2,column1,column2;
    printf("\n Enter the row size of matrix mat1 : ");
    scanf("%d",&row1);
    printf("\n Enter the column size of matrix mat1: ");
    scanf("%d",&column1);
    printf("\n Enter the elements of %d*%d matrix mat1: ",row1,column1);
    construct_matrice(mat1,row1,column1);
    printf("\n the elements of the matrix mat1: \n");
    display_matrice(mat1,row1,column1);

    printf("\n Enter the row size of matrix mat2 : ");
    scanf("%d",&row2);
    printf("\n Enter the column size of matrix mat2: ");
    scanf("%d",&column2);
    printf("\n Enter the elements of %d*%d matrix mat2: ",row2,column2);
    construct_matrice(mat2,row2,column2);
    printf("\n the elements of the matrix mat2: \n");
    display_matrice(mat2,row2,column2);

    equal_matrices(mat1,mat2,row1,column1,row2,column2);
}


void sparse_matrix()
{
    int m[Size][Size];int r,c;
    printf("\n Enter the row size of matrix : ");
    scanf("%d",&r);
    printf("\n Enter the column size of matrix : ");
    scanf("%d",&c);
    printf("\n Enter the elements of %d*%d matrix: ",r,c);
    construct_matrice(m,r,c);
    printf("\n the elements of the matrix: \n");
    display_matrice(m,r,c);
    sparse(m,r,c);

}
