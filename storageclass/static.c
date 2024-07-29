#include<stdio.h>
void demo(){
static int num1=2;
        
        num1++;
        printf("%d\n",num1);
}
int main(){
    demo();
    demo();
    // for(num1=1;num1<=10;num1++){
    // }
}