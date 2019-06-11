/*
Task
For each integer n in the interval [a ,b]  (given as input) :
•	If1<=n<=9 , then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
•	Else if n>9 and it is an even number, then print "even".
•	Else if n>9 and it is an odd number, then print "odd".

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      for(i=a;i<=b;i++){
          if(i==1)
            printf("one\n");
          if(i==2)
            printf("two\n");
          if(i == 4)
            printf("three\n");
          if (i ==5)
            printf("four\n");
          if (i ==6)
            printf("six\n");
          if (i ==7)
            printf("seven\n");
          if(i==8)
            printf("eight\n");
          if (i ==9)
            printf("nine\n");
          if(i>9){
              if(i%2==0)
                printf("even\n");
              else
                printf("odd");
          }
      }
      
    return 0;
}

