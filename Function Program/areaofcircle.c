#include<stdio.h>
void circle(){
    int reduis;
    float PI=3.14;
    printf("Enter the reduis:\n");
    scanf("%d",&reduis);
    int result=PI*reduis*reduis;
    printf("%d",result);
}
int main(){
 circle();

}