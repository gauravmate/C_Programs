#include <stdio.h>


void factorial()
{
    int fact = 1, num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
    fact = fact * i;
    
    }
    printf("Fcatorial is:%d\n", fact);
}
void number(){
    int i;
    for(i=1;i<=10;i++){
        printf("%d\n",i);
    }
}
int main()
{
    factorial();
    number();
    return 0;
}


