#include <stdio.h>
void sample(int num){

    printf("\n temp is:%d\n", num);
    // printf("\n temp is:%d", &num);

}

void demo(int sam[], int n)
{
     
   
    for (int i = 0; i < n; i++)
    {
        printf("temp is:%d\n", sam[i]);
    }
    
}
void arr()
{

    int temp[5] = {87, 90, 98, 98, 90};
    int i = 0;

    // using for loop
    for (int i = 0; i < 5; i++)
    {
        printf("temp is:%d\n", temp[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sample(temp[i]);
    }
    
    
   // demo(temp, 5);

    // using while
    //  while (i<5)
    //  {
    //      printf("\n temp is:%f", temp[i]);
    //      i++;
    //  }

    // do while using
    //  int i=0;
    //  do
    //  {
    //      printf("\n temp is:%f",temp[i]);
    //      i++;
    //  } while (i<5);

    // direct print
    //  printf("Temp [1] is:%f\n", temp[0]);
    //  printf("Temp [2] is:%f\n", temp[1]);
    //  printf("Temp [3] is:%f\n", temp[2]);
    //  printf("Temp [4] is:%f\n", temp[3]);
    //  printf("Temp [5] is:%f\n", temp[4]);
}
