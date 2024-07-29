#include<stdio.h>
int main(){
    int i=1,number=5,sum=0;
    // printf("Enter the number:\n");
    // scanf("%d\n",&number);
    do
    {
        printf("%d\n",i);
        sum+=i;
        i++;
    } while (i<=number);
    printf("Sum of:%d",sum);
    
}