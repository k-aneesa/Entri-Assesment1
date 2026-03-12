/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
 void main()
 {
     int a[25],i,n,max1,max2;
     printf("Enter the size of the array");
     scanf("%d",&n);
     printf("Enter the elements of the array \n");              
     for(i=0;i<n;i++)
     {
     scanf("%d",&a[i]);
     }                                                      
     printf("Elements of the array are \n");
     for(i=0;i<n;i++)
     {
     printf("%d\t",a[i]);
     }
     max1=a[0];
     max2=a[0];
     printf("\n");
     
     for(i=1;i<n;i++)
     {
         if(a[i]>max1)
         {
                     
             max2=max1;
             max1=a[i];
         }
         else if(a[i]<max1 && max2<a[i])
         {
             max2=a[i];
         }
     }
     printf("2nd largest no is %d",max2);
 }