#include<stdio.h>
int main(){
 

    char s;

    printf("Enter A  (A,a,E,e,I,i,O,o,U,u)\n");
    scanf("\n%c", &s);
    switch (s)
    {
    case 'A':
        printf("\3 It is Vowel");
        break;
   case 'E':
        printf("\3 It is Vowel");
        break;
    case 'I':
        printf("\3 It is Vowel");
        break;
    case 'O':
        printf("\3 It is Vowel");
        break;
    case 'U':
        printf("\3 It is Vowel");
        break;
    case 'a':
        printf("\3 It is Vowel");
        break;
   case 'e':
        printf("\3 It is Vowel");
        break;
    case 'i':
        printf("\3 It is Vowel");
        break;
    case 'o':
        printf("\3 It is Vowel");
        break;
    case 'u':
        printf("\3 It is Vowel");
        break;


    default:
        printf("\3It is Consonant");
        break;
    }
}