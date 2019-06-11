/*
Task 
Given set s={1,2,3..,n}, find:
the maximum value of a&b  which is less than a given integer k, where a and b (where a<b) are two integers from set s.
the maximum value of a|b which is less than a given integer k, where a and b (where a<b) are two integers from set s.
the maximum value of a^b which is less than a given integer k, where a and b (where a<b) are two integers from set s.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int c, maxA = 0, maxO = 0, maxOR = 0;
  for(int a=1;a<n;a++)
  {
      for(int b=a+1;b<=n;b++)
      {
        c = a & b;
          if (c < k && maxA < c)
            maxA = c;
          c = a | b;
          if (c < k && maxO < c)
            maxO = c;
          c = a ^ b;
          if (c < k && maxOR < c)
            maxOR = c;
      }
  }
  printf("%d\n%d\n%d", maxA, maxO, maxOR);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
