#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {

        printf("\n");
        for (j = 1; j <= 5; j++)
        {
           // if(i==1 || j==1 || i==5 || j==5)
            if(i==1 || j==1 || i==3|| i==5 || j==5){
          // if(i==1 || j==1 || j==3|| i==5 || j==5)
           printf("* ");

            }else{
                printf("  ");
            }
        }
    }
    //  for (i = 1; i <= 4; i++){
    //      //printf("\n");
    //      for(j=1;j<=i;j++){
    //         printf("\n");
    //      printf("* ");

    //      }
    //  }
}