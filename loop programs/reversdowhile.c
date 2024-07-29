#include<stdio.h>
void main(){
int num,reminder=0,revNumber=0;
printf("Enter the number:");
scanf("%d",&num);
do
{
    reminder=num%10;
    revNumber=revNumber*10+reminder;
    num=num/10;
} while (num!=0);
printf("Reveres number is %d\n",revNumber);


}