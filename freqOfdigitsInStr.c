//Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT 
     * i is used in for loop
     * j is used to store the the value of digit from the str and to access the array
     * ch is used to check if the each character is digit or not
     */
      
    
    int i, arr[10]={0},j;
    char *num = (char *) malloc(sizeof(num));
    scanf("%s",num);
    for(i=0;i<strlen(num);i++){
        j=num[i];
            if(isdigit(j){
                arr[j]++;
                continue;
            }
    }
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
