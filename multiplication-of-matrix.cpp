#include<stdio.h>
#include<iostream>
#include<conio.h>
  int main()
  {
   system("cls");
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("enter firs matrix \n"); 
    for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
	 {
	    scanf("%d",&a[i][j]);
	 }
     }
     system("cls");
    for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
	 {
	    printf("%d ",a[i][j]);
	 }
	 printf("\n");
     }
    printf("enter second matrix \n");
    for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	  {
	     scanf("%d",&b[i][j]);
	  }
      }
system("cls");
    for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	  {
	    printf("%d ",b[i][j]);
	  }
	  printf("\n");
      }
      for(i=0;i<3;i++)
       {
	 for(j=0;j<=3;j++)
	   {
	     c[i][j]=0;
	     for(k=0;k<3;k++)
	       {
		 c[i][j]=c[i][j]+a[i][j]*b[j][k];
	       }
	    }
	}
  	printf("press enter for multiplication of matrixs");
getch();
	system("cls");
    printf("multiplication of matrix number 1 and 2-\n");
    for(i=0;i<3;i++)
     {
	for(j=0;j<3;j++)
	 {
	   printf("%d*%d  ",a[i][j],b[i][j]);
	 }
	 printf("\n");
     }
     printf("\n    =    \n");
     for(i=0;i<3;i++)
     {
	for(j=0;j<3;j++)
	 {
	   printf("%d   ",c[i][j]);
	 }
	 printf("\n");
     }
   return 0;  
  }

