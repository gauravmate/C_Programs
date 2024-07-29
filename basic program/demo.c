Structure is -

Question 1Answer

1.
basic data type


2.
library function


3.
user defined type


4.
header
What is the output of the following code snippet?

#include<stdio.h>

int main(){

int p=8, q=0, r=0;

q = ++p;

r = p++;

printf("%d \t  %d \t  %d", p, q, r);

return 0;

}

Question 2Answer

a.
10     8     8


b.
8     8     9


c.
8     9     9


d.
10     9     9
What will be the output of the following C code?  #include<stdio.h>

int main()

{

int p = 1, q = 2, r = 3, s = 4, x;

e = r + s = q * p;

printf(“%d, %d\n”, x, s);

}

Question 3Answer

a.
Syntax error


b.
5, 2


c.
7, 2


d.
7, 4
What will be the value assigned to res?

{

. . .

int num=6, res;

res  = func(num);

}

int func(int x)

{

return (x * x);

}

Question 4Answer

a.
6


b.
36


c.
no value


d.
garbage
int main() 

{

    int arr[6] = {1,2,3,4,5,6}, *ptr;

 

    ptr=arr;

    

    ptr++;

 

    printf("%d ",*(ptr+2));

    return 0;

}

Question 5Answer

a.
garbage


b.
3


c.
4


d.
2
#include <stdio.h>

void solve(int x) {

    if(x++ == 3) {

        printf("\n in solve() function x=> %d ", x);

        return;

    }

    printf("\n  value of x => %d ", x);

}

int main() {

    solve(3);

 return 0;

}

Question 6Answer

a.
in solve() function x=> 4


b.

in solve() function x=> 3

c.
compile time error


d.
 value of x =>3
 How many times i value is checked in the following C program?

#include <stdio.h>

int main()

{

	int i = 0;

	while (i < 3);

		i++;

}





Question 7Answer

a.
1 time

b.
4 times 

c.
syntax error


d.
Infinite times
#include<stdio.h>

int main()

{

 int i = 0;

 for (printf("1stn"); i < 2 && printf("2nd"); ++i && printf("3rdn"))

 {

  printf("\n*n");

 }

 return 0;

}



Question 8Answer

a.
1st

2nd

*

3rd

2nd

*


b.
1stn2nd

 *n3rdn2nd

 *n3rdn


c.
1st

2nd

3rd

*

2nd

3rd*n




d.
1st

2nd

3rd

*n

1st

2nd

3rd


Time left 0:04:21
Question 7
Answer saved
Marked out of 1.00
Flag question
Question text
How many times i value is checked in the following C program?

#include <stdio.h>

int main()

{

	int i = 0;

	while (i < 3);

		i++;

}





Question 7Answer

a.
1 time

b.
4 times 

c.
syntax error


d.
Infinite times


Question 8
Answer saved
Marked out of 1.00
Flag question
Question text
#include<stdio.h>

int main()

{

 int i = 0;

 for (printf("1stn"); i < 2 && printf("2nd"); ++i && printf("3rdn"))

 {

  printf("\n*n");

 }

 return 0;

}



Question 8Answer

a.
1st

2nd

*

3rd

2nd

*


b.
1stn2nd

 *n3rdn2nd

 *n3rdn


c.
1st

2nd

3rd

*

2nd

3rd*n




d.
1st

2nd

3rd

*n

1st

2nd

3rd


Question 9
Answer saved
Marked out of 1.00
Flag question
Question text
Find output   

#include<stdio.h>

int main(){

         int x=10,y=20; 

         if(x==y) ; { 

                  printf("%d %d\n" , x , y );

         }

         return 0;

}

Question 9Answer

a.
error


b.
10       20


c.
no output


d.
20 10


Find output - 

struct employee{

char name[20];int age;float salary;

};

int main(){

struct employee e1;

strcpy(e1.name,"Amit");

e.age=20;e.salary=12345.25;

printf("%s %d %f",e.name,age,salary);

return 0;

}

Question 10Answer

a.
compile error


b.
Amit 20 12345.25


c.
run time error


d.
no output
A preprocessor processes the source code before the compiler.

Question 11Answer

a.
TRUE


b.
FALSE
which statement is true about pointer ptr ? 

#include<stdio.h>

int * display(){

	int num = 7;

	return &num;

}

int main()

{

	int* ptr;

	ptr = display();

	return 0;

}

Question 12Answer

a.
*ptr gives  value 7


b.
*ptr will print garbage value 


c.
ptr pointer becomes dangling pointer 


d.
null pointer 
What will be the output:

int main()

{

  int arr[5] = {1, 2, 3, 4, 5};

  int i;

  for(i=1; i < 5; i++)

    printf("%u", arr[i]);

  return 0;

}

Question 13Answer

a.
Compile time error


b.
2 3 4 5


c.
Run time error


d.
1 2 3 4

Time left 0:03:18
Question 13
Answer saved
Marked out of 1.00
Flag question
Question text
What will be the output:

int main()

{

  int arr[5] = {1, 2, 3, 4, 5};

  int i;

  for(i=1; i < 5; i++)

    printf("%u", arr[i]);

  return 0;

}

Question 13Answer

a.
Compile time error


b.
2 3 4 5


c.
Run time error


d.
1 2 3 4


Question 14
Answer saved
Marked out of 1.00
Flag question
Question text
#include <stdio.h>

int main(void)

{

	int k;

	for (k = 1 ,  printf("%d: initialization!\n", k) ;    printf(" condition k = %d\n", k) , k * k < 15 ; k += 2  , printf("updated k= %d\n", k) )

		printf("k is %d in the loop\n", k) ;

	return 0;

}



Question 14Answer

a.
1: initialization!

 condition k = 1

k is 1 in the loop

updated k= 3

 condition k = 3

k is 3 in the loop

updated k= 5

 condition k = 5


b.
1: initialization!

 condition k = 1

k is 1 in the loop

updated k= 2

 condition k = 2

k is 3 in the loop

updated k= 4

 condition k = 4


c.
1: initialization!

 condition k = 1

k is 1 in the loop

updated k= 3

 condition k = 3

k is 3 in the loop


d.
compile time error

what will be output ?

#include<stdio.h>

int main(){

	for ( ; ; ){

		printf("\n Hello ");

	}

	return 0;

}

Question 15Answer

a.
compile time error


b.
NO Output 


c.
Hello


d.
infinite loop
Time left 0:02:34
Question 13
Answer saved
Marked out of 1.00
Flag question
Question text
What will be the output:

int main()

{

  int arr[5] = {1, 2, 3, 4, 5};

  int i;

  for(i=1; i < 5; i++)

    printf("%u", arr[i]);

  return 0;

}

Question 13Answer

a.
Compile time error


b.
2 3 4 5


c.
Run time error


d.
1 2 3 4


Question 14
Answer saved
Marked out of 1.00
Flag question
Question text
#include <stdio.h>

int main(void)

{

	int k;

	for (k = 1 ,  printf("%d: initialization!\n", k) ;    printf(" condition k = %d\n", k) , k * k < 15 ; k += 2  , printf("updated k= %d\n", k) )

		printf("k is %d in the loop\n", k) ;

	return 0;

}



Question 14Answer

a.
1: initialization!

 condition k = 1

k is 1 in the loop

updated k= 3

 condition k = 3

k is 3 in the loop

updated k= 5

 condition k = 5


b.
1: initialization!

 condition k = 1

k is 1 in the loop

updated k= 2

 condition k = 2

k is 3 in the loop

updated k= 4

 condition k = 4


c.
1: initialization!

 condition k = 1

k is 1 in the loop

updated k= 3

 condition k = 3

k is 3 in the loop


d.
compile time error


Question 15
Answer saved
Marked out of 1.00
Flag question
Question text
what will be output ?

#include<stdio.h>

int main(){

	for ( ; ; ){

		printf("\n Hello ");

	}

	return 0;

}

Question 15Answer

a.
compile time error


b.
NO Output 


c.
Hello


d.
infinite loop

int main()

    {

        int x = 0;

        if (x == 1)

            if (x >= 0)

                printf("true\n");

            else

                printf("false\n");

    }

Question 16Answer

a.
No output


b.
 false


c.
Depends on the compiler


d.
TRUE

what is entry point for c programs ? 

Question 17Answer

a.
#include<stdio.h>


b.
entry point can be any function


c.
main() function is entry point 


d.
none of the above

# include <stdio.h>

int main()

{

    char s1[7] = "1234", *p;

    p = s1 + 2;

    *p = '0' ;

    printf ("%s", s1);

}

Question 18Answer

a.
1234


b.
120400


c.
1204


d.
1034

What will be the output of the following statements ?

int a=5,b=6,c=9,d;      

 d = c > a ? ( c > b ? c : b ) : (a > b ? a : b) ;                                        

 printf(“%d”,d );

Question 19Answer

a.
Compile Time Error


b.
5


c.
6


d.
9

Time left 0:01:40
Question 19
Answer saved
Marked out of 1.00
Flag question
Question text
What will be the output of the following statements ?

int a=5,b=6,c=9,d;      

 d = c > a ? ( c > b ? c : b ) : (a > b ? a : b) ;                                        

 printf(“%d”,d );

Question 19Answer

a.
Compile Time Error


b.
5


c.
6


d.
9

Question 20
Answer saved
Marked out of 1.00
Flag question
Question text
What will be the output of the following C code?

#include <stdio.h>

#define CUBE(x) x * x * x

void solve() {

    int ans = 216 / CUBE(2);

    printf("%d", ans);

}

int main() {

    solve();

 return 0;

}

Question 20Answer

a.
27


b.
432


c.
72


d.
None of  the above
Time left 0:01:31
Question 19
Answer saved
Marked out of 1.00
Flag question
Question text
What will be the output of the following statements ?

int a=5,b=6,c=9,d;      

 d = c > a ? ( c > b ? c : b ) : (a > b ? a : b) ;                                        

 printf(“%d”,d );

Question 19Answer

a.
Compile Time Error


b.
5


c.
6


d.
9

Question 20
Answer saved
Marked out of 1.00
Flag question
Question text
What will be the output of the following C code?

#include <stdio.h>

#define CUBE(x) x * x * x

void solve() {

    int ans = 216 / CUBE(2);

    printf("%d", ans);

}

int main() {

    solve();

 return 0;

}

Question 20Answer

a.
27


b.
432


c.
72


d.
None of  the above


Question 21
Answer saved
Marked out of 1.00
Flag question
Question text
What is the output of the following code?   

#define TANK(a) a*10+2

int main()

{

    int a = TANK(2) / 2;

    printf("%d",a);

    return 0;

}

Question 21Answer

a.
11


b.
22


c.
21


d.
Compilation error

What is the output of the following code? 

int main() { 

float marks[3] = {90.5, 92.5, 96.5}; 

int a=0; 

while(a<3) { 

printf("%.2f \t", marks[a]); 

a++; 

} 

}

Question 22Answer

a.
90.5       92.5      96.5


b.
90.50      92.50      96.50


c.
0.00      0.00      0.00


d.
Compilation error

What is the output of the following code?   

int main() { 

int a[3] = {20,30,40}; 

a[0]++; 

int i=0; 

while(i<3) { 

printf("%d ", i[a]); 

i++; 

} 

}

Question 23Answer

a.
41 30 20


b.
20 30 40


c.
21 30 40


d.
None of the above
Which function is used to concatenate two string in C?

Question 24Answer

a.
concat()


b.
cat()


c.
stringcat()


d.
strcat()
#include<stdio.h>

int main()

{

	int b = 8;

	printf("\n %d ", b++==8 || b++!=8);

	printf("\t %d ", b);

	printf("\t %d ", --b !=8 ||  b-- == 8);

	printf("\t %d ", b);

	return 0;

}

Question 25Answer

a.
0       9       0       7


b.
1       9       1       7


c.
1       10       0       8


d.
0      10       0       8