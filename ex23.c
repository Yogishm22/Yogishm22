#include <stdio.h>

int main()
{ 
   int marks[20] [20];

   for (int i = 0; i < 20; i++)
   {
       for (int j = 0; j < 20; j++)
       {
           printf("The value of the %d, %d array enterd is %d\n", i,j, marks[i][j]);
       }
       printf("\n");
    //    printf("Enter the value as %d of the element in array\n", i);
    //    scanf("%d\n",&marks [i]);
   }
   
    // printf("Hello World\n");
    return 0;
}