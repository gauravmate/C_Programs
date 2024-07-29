#include<stdio.h>
int main(){
    int num, a=0,b=1,c;
    printf("\nEnter any integer number:");
    scanf("%2d",&num);
    for (int i = 1; i <= num; i++)
    {
        printf("\n Fibonacci Series is:%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    

}