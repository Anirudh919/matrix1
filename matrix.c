#include<stdio.h>
void call() ;
int main()
{
 int a,b,d,i,q,j;
 printf("enter the number of matrix :\n");
 scanf("%d",&a);

 printf("enter the row & column number : \n");
	
 scanf("%d%d",&b,&d);

 int array[b][d],sum[100][100];
 printf("there are [%d] rows and [%d] column ,you enter \n",b,d); 
 for(q=0;q<a;q++)
	
 {
 
  printf("\nmatrix number [%d]\n",q);
 for(i=0;i<b;i++)
 {
  for(j=0;j<d;j++)
  {
   printf("enter the number [%d][%d]",i,j);
   scanf("%d",&array[i][j]);
  
  }
 }
 } //return array,b,d;
 call(array,b,d
 );
  }
  
  
void call(int array[10][10],int b,int d)  
  { int a,i,q,j;
int sum[100][100];
printf("values  b %d d %d",b,d);
 for(i=0;i<b;i++)
 {
  for(j=0;j<d;j++)
  {  
   sum[i][j] = sum [i][j]+ array[i][j];
        // printf("%d ", &sum[i][j]);
  }
 }


 // printing the result
  printf("\nSum of two matrices: \n");
  

  
 
  for(i=0;i<b;i++)
 {
  for(j=0;j<d;j++)
  {
      printf("%d ", sum[i][j]);
      if (j == d - 1) 
   {
        printf("\n\n");
      }
      
    }
}
}