#include<stdio.h>

void add(){
    int num1,num2,sum;
    printf("\nEnter the number1 And number2:");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("Addition is:%d\n",sum);
}
void sub(){
    int num1,num2,sum;
    printf("\nEnter the number1 And number2:");
    scanf("%d%d",&num1,&num2);
    sum=num1-num2;
    printf("subtraction is:%d",sum);
}
void mul(){
    int num1,num2,sum;
    printf("\nEnter the number1 And number2:");
    scanf("%d%d",&num1,&num2);
    sum=num1*num2;
    printf("multliplication is:%d",sum);
}
void div(){
    int num1,num2,sum;
    sum=num1/num2;
    printf("division is:%d",sum);
}

int main(){
     add();
     sub();
     mul();
     div();
    return 0;
}