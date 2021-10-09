
//matrices

 int construct_matrice(int m[][10],int row,int column)
 {
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    return 0;
 }

  int display_matrice(int m[][10],int row,int column)
 {
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
    return 0;
 }


 //to add two matrices

 int add_mat(int mat1[][10],int mat2[10][10],int sum[10][10],int row,int column){
    int i,j;
    for(i=0;i<row;i++)
     {
         for(j=0;j<column;j++){
            sum[i][j] = mat1[i][j]+mat2[i][j];
         }
    }

    //printing results
    printf("\nSum of two matrices: \n");
   for (i = 0; i < row;i++)
    for (j = 0; j < column; j++) {
      printf("%d   ", sum[i][j]);
      if (j == column - 1) {
        printf("\n\n");
      }
    }
 }


 // to check if two matrices are same

 int equal_matrices(int mat1[][10],int mat2[][10],int row1,int column1,int row2,int column2)
{
   // Comparing two matrices for equality
   int i,j,flag=1;
    if(row1==row2 && column1==column2)
    {
        printf("Matrices can be compared \n");
            for (i = 0; i < row1; i++)
            {
                for (j = 0; j < column2; j++)
                {
                    if (mat1[i][j] != mat2[i][j])
                    {
                        flag = 0;
                        break;
                    }
                 }
            }
        }

        else
        {
            printf(" Cannot be compared\n");
            exit(1);
        }

     if (flag == 1)
            printf("Two matrices are equal \n");
        else
            printf("But, two matrices are not equal \n");
}

//sparse matrix

int sparse(int mat[][10],int row,int col){
    int i,j;
    int sparse_counter=0;
    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
      {
          if(mat[i][j]==0)
            ++sparse_counter;
      }
    }
    if(sparse_counter>((row*col)/2))
        printf("\n the matrix is a sparse matrix");
    else
        printf("\n Matrix is not sparse");
}
