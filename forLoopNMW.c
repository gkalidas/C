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
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char labels[11][6] = {"one",   "two",   "three", "four", "five", "six",
                          "seven", "eight", "nine",  "even", "odd"};
    int labels_index;
    for(int i=a;i<=b;i++){
        labels_index = i<=9?i-1:9+i%2;
        printf("%s\n", labels[labels_index]);
    }
    return 0;
}
