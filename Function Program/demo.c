#include <stdio.h>

void demo(int *a,int *b){

    int c=*a+*b;
    printf("%d\n",c);
}
int main() {
    int a,b,c;
    printf("\nEnter the two number:");
    scanf("%d%d",&a,&b);
    demo(&a,&b);
}
