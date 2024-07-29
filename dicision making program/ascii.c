#include<stdio.h>
int main(){
    char ch;
    printf("Enter the any charecter");
    scanf(" %c",&ch);
    if(ch >=48 && ch <=57){
        printf("It is a Digit");
    }else printf("Some other charetcer");
    return 0;
}